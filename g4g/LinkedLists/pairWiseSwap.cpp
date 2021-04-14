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
        Node *temp;
        Node *x = NULL;
        while (head)
        {
            temp = head->next; // can be null
            if (x && temp)
            {
                x->next = temp;
            }
            x = head;
            if (temp)
            {
                head->next = temp->next;
                temp->next = head;
            }
            else{
                head->next = NULL;
            }
            head = head->next;
        }

        return returnNode;

}

int main()
{
    // int arr[7] = {2, 2, 4, 5, 6, 7, 8};
    // Node *head = new Node(1);
    // Node *cpy = head;
    // for (int i = 0; i < 7; i++)
    // {
    //     cpy->next = new Node(arr[i]);
    //     cpy = cpy->next;
    // }

    Node* head = new Node(4);
    head->next = new Node(4) ;
    head->next->next = new Node(15);

    Node* cpy = pairWiseSwap(head);

    while (cpy)
    {
        cout << cpy->data << "\t";
        cpy = cpy->next;
    }
}