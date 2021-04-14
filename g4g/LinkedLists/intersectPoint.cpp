#include <iostream>
#include <map>
#include <stdio.h>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
    }
};

int intersectPoint(Node *head1, Node *head2)
{
    int l1 = 0;
    int l2 = 0;
    int heightOfCommon = 0;
    Node *h1 = head1;
    Node *h2 = head2;
    while (h1)
    {
        l1 += 1;
        h1 = h1->next;
    }

    while (h2)
    {
        l2 += 1;
        h2 = h2->next;
    }
    int counter = 0;
    if (l1 > l2)
    {
        heightOfCommon = l1 - l2;
        h1 = head1;
        while (h1 && counter <= heightOfCommon)
        {
            h1 = h1->next;
            counter += 1;
        }
    }
    else
    {
        counter = 0;
        heightOfCommon = l2 - l1;
        h2 = head2;
        while (h2 && counter <= heightOfCommon)
        {
            h2 = h2->next;
            counter += 1;
        }
    }

    if(l1>l2){
        h2 = head2;
    }else{
        h1=head1;
    }

    while(h1){
        if(h1 == h2){
            return h1->data;
        }
        h1 = h1->next;
        h2=h2->next;
    }

    return -1;
}

int main()
{
    Node *head1 = new Node(3);
    head1->next = new Node(1);
    head1->next->next = new Node(9);

    Node *head2 = new Node(3);
    head2->next = new Node(6);
    head2->next->next = new Node(9);
    head2->next->next->next = head1->next;

    cout << intersectPoint(head1, head2);
}