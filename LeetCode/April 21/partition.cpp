#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *partition(ListNode *head, int x)
{
    if(!head){
        return head;
    }
    queue<int> q;
    ListNode* headCpy = new ListNode(101);

    ListNode* out = headCpy;
    while(head){
        if(head->val >= x){
            q.push(head->val);
        }else{
            if(headCpy->val != 101){
                headCpy->next = new ListNode(head->val);
                headCpy = headCpy->next;
            }else{
                headCpy->val = head->val;
            }
        }
        head = head->next;
    }

    while(q.size()){
        if(headCpy->val != 101){
            headCpy->next = new ListNode(q.front());
            headCpy = headCpy->next;
        }else{
            headCpy->val = q.front();
        }

        q.pop();
    }
    return out;
}

// slow 

// ListNode *partition(ListNode *head, int x)
// {
//     ListNode *p1 = new ListNode(0);
//     ListNode* p1head = p1;
//     ListNode *p2 = new ListNode(0);
//     ListNode *p2Head = p2;

//     while(head){
//         if(head->val < x){
//             p1head->next = head;
//             p1head = p1head->next;
//         }else{
//             p2Head->next = head;
//             p2Head = p2Head->next;
//         }
//         head = head->next;
//     }
//     p2Head -> next = NULL;

//     p1head->next = p2->next;

//     return p1->next;
// }

int main()
{
    ListNode *head = new ListNode(1,
                                  new ListNode(4,
                                               new ListNode(3,
                                                            new ListNode(2, new ListNode(5, new ListNode(2))))));
    head = partition(new ListNode(1), 0);

    while (head)
    {
        cout << head->val;
        head = head->next;
    }
}