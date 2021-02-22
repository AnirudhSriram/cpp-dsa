#include <stdio.h>
#include <iostream>

class Node
{
public:
    int number;
    Node *next;
};

void insertNode(Node *head, int position, int value)
{
    Node *insertNode = new Node();

    // inserts before node at position
    int pos = 1;
    Node *iterator = head;
    while (pos != position)
    {
        iterator = iterator->next;
        pos += 1;
    }

    insertNode->number = value;
    insertNode->next = iterator->next;
    iterator->next = insertNode;

}

Node *deleteNode(Node *head, int position)
{
    int pos = 1;
    Node *iterator = head;

    if (position == 1)
    {
        iterator = head->next;
        return iterator;
    }
    else
    {
        while (pos != (position - 1))
        {
            pos += 1;
            iterator = iterator->next;
        }
        iterator->next = iterator->next->next;
        return head;
    }
}
int main()
{

    Node *head = new Node();
    Node *a = new Node();

    head->number = 1;
    head->next = a;
    a->number = 2;
    a->next = NULL;

    insertNode(head, 2, 3);
    insertNode(head, 3, 4);
    insertNode(head, 4, 5);
    insertNode(head, 5, 6);

    head = deleteNode(head, 3);
    while (head)
    {
        std::cout << head->number;
        head = head->next;
    }
}