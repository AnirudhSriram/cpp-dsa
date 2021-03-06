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

Node *pairWiseSwap(struct Node *head)
{
    Node *returnNode = head->next;
    Node* temp;
    Node* prev = NULL;
    while(head){
        temp = head->next;
        head->next = temp->next;
        temp->next = head;
        if(prev){
            prev->next = head;
        }
        prev = head;
        head = head->next;
    }

    return returnNode;
}

int main(){
    int arr[7] = {2,2,4,5,6,7,8};
    Node* head = new Node(1);
    Node* cpy = head;
    for (int i = 0; i< 7; i++){
        cpy->next = new Node(arr[i]);
        cpy = cpy->next;
    }

    cpy = pairWiseSwap(head);
}