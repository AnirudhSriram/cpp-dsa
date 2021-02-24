#include <iostream>
#include <stdio.h>
#include<stack>
#include<vector>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// vector<Node*> reverseSubList(Node* head, int k){
//     stack<Node*> s;
//     int count = 0;
//     Node* temp;
//     Node* temp2;
//     vector<Node*> returnArr;
//     while(count < k && head){
//         s.push(head);
//         head = head->next;
//         count++;
//         if(!head){
//             break;
//         }
//     }
//     returnArr.push_back(s.top());
//     temp2 = s.top()->next;
//     int stackLen = s.size() - 1;
//     while(stackLen){
//         temp = s.top();
//         s.pop();
//         temp->next = s.top();
//         stackLen--;
//     }

//     temp = s.top();
//     // returnArr.begin()[0]->next = temp->next;
//     temp->next = temp2;
//     returnArr.push_back(temp);

//     return returnArr;
// }

// Node *reverse(Node *head, int k)
// {
//     Node *headCpy = head;
//     Node* returnHead = NULL;
//     Node* prevHead = head;
//     vector<Node*> returnVal;
//     while(headCpy){
//         returnVal = reverseSubList(headCpy, k); // 4,1->5
//         headCpy = returnVal.begin()[1]->next;
//         if(! returnHead){
//             returnHead = returnVal.begin()[0];
//         }
//         if(prevHead){
//             prevHead->next = returnVal.begin()[0];
//             prevHead = returnVal.begin()[1];
//         }else{
//             prevHead = returnVal.begin()[1];
//         }
//     }
//     return returnHead;
// }

// int main()
// {

//     Node *head = new Node(1);
//     Node *headcpy = head;
//     for (int i = 2; i <= 8; i++)
//     {
//         headcpy->next = new Node(i);
//         headcpy = headcpy->next;
//     }
//     headcpy->next = NULL;
//     headcpy = head;

//     // while (headcpy)
//     // {
//     //     cout << headcpy->data << '\t';
//     //     headcpy = headcpy->next;
//     // }

//     headcpy = reverse(head, 2);
//     // cout << "\n";
//     while (headcpy)
//     {
//         cout << headcpy->data << '\t';
//         headcpy = headcpy->next;
//     }
// }


struct Node* Reverse(struct Node* head, int k)
{
    // Create a stack of Node*
    stack<Node*> mystack;
    struct Node* current = head;
    struct Node* prev = NULL;

    while (current != NULL) {

        // Terminate the loop whichever comes first
        // either current == NULL or count >= k
        int count = 0;
        while (current != NULL && count < k) {
            mystack.push(current);
            current = current->next;
            count++;
        }

        // Now pop the elements of stack one by one
        while (mystack.size() > 0) {

            // If final list has not been started yet.
            if (prev == NULL) {
                prev = mystack.top();
                head = prev;
                mystack.pop();
            } else {
                prev->next = mystack.top();
                prev = prev->next;
                mystack.pop();
            }
        }
    }

    // Next of last element will point to NULL.
    prev->next = NULL;

    return head;
}