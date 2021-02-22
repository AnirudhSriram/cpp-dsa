#include <stdio.h>
#include <iostream>
#include <stack>
struct Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

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

int getMiddle(Node *head){
    struct Node* headCpy = head;
    if(!headCpy){
        return -1;
    }

    int counter = 1;
    while(headCpy){
        counter +=1;
        headCpy = headCpy->next;
    }
    int index = (counter-1)/2;

    headCpy = head;

    int i = 0;
    while (i < index){
        headCpy = headCpy->next;
        i+=1;
    }

    return headCpy->data;
}



int main()
{
    struct Node *head = new Node(1);
    insertNode(head, 1, 2);
    insertNode(head, 2, 3);
    insertNode(head, 3, 4);
    // insertNode(head, 4, 5);


    std::cout << getMiddle(head);
}
