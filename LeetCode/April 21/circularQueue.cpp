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
        if (this->isEmpty())
        {
            this->arr[i] = value;
            this->j++;
            return true;
        }
        else if (this->j % this->k == this->i)
        {
            return false;
        }
        else
        {
            this->j = this->j % this->k;
            this->arr[j] = value;
            int temp = this->j;
            this->j++;
            this->j = this->j % this->k;
            if(this->j == this->i){
                this->j = temp;
            }  
            return true;
        }
    }

    bool deQueue()
    {
        if (!this->isEmpty())
        {
            i = (i + 1) % k;
            return true;
        }
        return false;
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
        return this->i == this->j-1;
    }

    bool isFull()
    {
        return j == (i - 1) ? true : false;
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