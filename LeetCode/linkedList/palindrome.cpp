#include <iostream>
#include <stdio.h>
using namespace std;
#include <deque>

struct Node
{
    int val;
    Node *next;

    Node(int v)
    {
        val = v;
        next = NULL;
    }
};

bool isPalindrome(Node *head)
{
    deque<int> v;
    while (head)
    {
        v.push_back(head->val);
        head = head->next;
    }
    if (v.size() == 1 || v.size() == 0)
    {
        return true;
    }
    while (!v.empty())
    {
        if (v.front() != v.back())
        {
            return false;
        }
        v.pop_back();
        if (!v.empty())
        {
            v.pop_front();
        }
    }
    return true;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);

    cout << isPalindrome(head);
}