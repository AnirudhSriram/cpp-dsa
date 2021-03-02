#include <stdio.h>
#include <iostream>
 
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node* removeLoop(Node* head){
    map<Node*, int> m;
    Node* prevValue = NULL;
    while(head){
        if(m.count(head) > 0){
            prevValue->next = NULL;
            return ;
        }
        prevValue = head;
        m[head] = 0;
    }
}

int main(){
    Node* head =  new Node(1);

}