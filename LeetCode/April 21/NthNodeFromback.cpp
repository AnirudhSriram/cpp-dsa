#include <iostream>
#include <stdio.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* tail = NULL;

    while(n >0){
        fast = fast->next;
        n--;
    }

    while(fast){
        fast = fast->next;
        tail = slow;
        slow = slow->next;
    }
    if(tail == NULL){
        return head->next;
    }

    tail->next = slow->next;

    return head;

    

}

int main()
{
    // ListNode* head = new ListNode(1);
    // head->next = new ListNode(2,new ListNode(3, new ListNode(4, new ListNode(5))));
    ListNode *head = new ListNode(1, new ListNode(2));
    ListNode *x = removeNthFromEnd(head, 1);
    while (x)
    {
        cout << x->val;
        x = x->next;
    }
}
