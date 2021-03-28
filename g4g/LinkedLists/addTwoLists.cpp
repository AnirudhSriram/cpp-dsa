#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
}

struct Node *
addTwoLists(struct Node *first, struct Node *second)
{
    stack<int> f1;
    stack<int> f2;

    while (first)
    {
        f1.push(first->data);
        first = first->next;
    }

    while (second)
    {
        f2.push(second->data);
        second = second->next;
    }

    int f1Size = f1.size();
    int f2Size = f2.size();

    Node *next = NULL;
    Node *tempNode;
    int carry = 0;
    while (f1Size && f2Size)
    {
        int temp = f1.top() + f2.top() + carry;
        if (temp > 9)
        {
            carry = 1;
            tempNode = new Node(temp % 10);
        }
        else
        {
            carry = 0;
            tempNode = new Node(temp);
        }

        tempNode->next = next;
        next = temmpNode;
        f1.pop();
        f2.pop();
        f1Size--;
        f2Size--;
    }

    while (f1Size)
    {
        tempNode = new Node(f1.top());
        tempNode->next = next;
        next = tempNode;
        f1.pop();
        f1Size--;
    }

    while (f2Size)
    {
        tempNode = new Node(f2.top());
        tempNode->next = next;
        next = tempNode;
        f2.pop();
        f2Size--;
    }

    return next;
}


int main(){
    Node* h1 = new Node(4);
    h1->next = new Node(5);

    Node* h2 = new Node(3);
    h2->next = new Node(9);
    h2->next->next = new Node(0);

    Node* r = addTwoLists(h1,h2);

    while(r){
        cout << r->data << " ";
        r = r->next;
    }
}