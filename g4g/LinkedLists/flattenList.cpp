#include <stdio.h>
#include <iostream>

struct Node
{
    int data;
    Node *next;
    Node *bottom;

    Node(int x)
    {
        data = x;
        next = NULL;
        bottom = NULL;
    }
}

Node *
flatten(Node *root)
{
    Node *cpy = root;
    while (cpy->next)
    {
        Node *right = cpy->next;
        while (cpy->bottom)
        {
            cpy->next = cpy->bottom;
            cpy = cpy->bottom;
        }
        cpy->next = cpy->bottom;
        cpy->next->next = right;
    }
    return root;
}