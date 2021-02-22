#include "Node.h"
#include<iostream>
#include<stdio.h>
using namespace std;

Node* rotate(Node* head, int k)
{
    int i = 1;
    Node* tempHead = head;
    Node* temp;
    while(i <= k && head)
    {
        temp = head;
        head = head->next;
        i+=1;
    }
    if(!head){
        return tempHead;
    }
    temp->next = NULL;


    Node* newHead = head;

    while(head->next){
        head = head->next;
    }
    
    head->next = tempHead;

    return newHead;

}

void insertNode(Node *head, int position, int value)
{
    struct Node *insertNode = new Node(value);

    // inserts before node at position
    int pos = 1;
    Node *iterator = head;
    while (pos != position)
    {
        iterator = iterator->next;
        pos += 1;
    }

    insertNode->next = iterator->next;
    iterator->next = insertNode;
}

int main()
{
    struct Node *head = new Node(12);
    // int arr[4] = {4,7,8,9};

    // for (int i = 0;i<4; i++ ){
    //         insertNode(head,i+1,arr[i]);
    // }
    head->next = new Node(26);
    head = rotate(head,5);

    while(head){
        cout << head->data;
        head = head->next;
    }
}