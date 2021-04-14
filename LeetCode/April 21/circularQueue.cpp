#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class MyCircularQueue
{
public:
    int j, k, i;
    int *arr;
    MyCircularQueue(int k)
    {
        this->k = k;
        this->j = -1;
        this->i = 0;
        this->arr = (int *)calloc(k, sizeof(int));
    }

    bool enQueue(int value)
    {
        if(this->isFull()){
            return false;
        }else{
            this->j = (this->j+1)%k;
            arr[this->j] = value;
            return true;
        }
    }

    bool deQueue()
    {
        if(this->isEmpty()){
            return false;
        }
        if(this->j == this->i){
            this->i = 0;
            this->j = -1;
        }else{
            this->i = (this->i+1)%this->k;
        }
    }

    int Front()
    {
        if (this->isEmpty())
        {
            return -1;
        }
        return arr[i];
    }

    int Rear()
    {
        if (this->isEmpty())
        {
            return -1;
        }
        return arr[j];
    }

    bool isEmpty()
    {
        return this->j == -1 ;
    }

    bool isFull()
    {
        return !this->isEmpty() && (this->j+1)%this->k == this->i;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */

int main()
{
    MyCircularQueue *myCircularQueue = new MyCircularQueue(3);
    myCircularQueue->enQueue(2); // return True
    myCircularQueue->enQueue(1); // return True
    myCircularQueue->enQueue(3); // return True
    myCircularQueue->enQueue(4); // return False
    myCircularQueue->Rear();     // return 3
    myCircularQueue->isFull();   // return True
    myCircularQueue->deQueue();  // return True
    myCircularQueue->enQueue(4); // return True
    myCircularQueue->Rear();     // return 4
}