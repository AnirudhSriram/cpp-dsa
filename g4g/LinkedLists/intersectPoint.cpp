#include<iostream>
#include<map>
#include<stdio.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
    }
};

int intersectPoint(Node* head1, Node* head2)
{
    map <Node* ,int> m ;
    while(head1 && head2){
        if(m.count(head1) > 0){
            return head1->data;
        }else{
            m[head1] = 0;
        }
        
        if(m.count(head2) > 0){
            return head2->data;
        }else{
            m[head2] = 0;
        }
        
        
        head1 = head1->next;
        head2 = head2->next;
    }
    return -1;
}


int main(){
    Node* head1 = new Node(3);
    head1->next  = new Node(1);
    head1->next->next = new Node(9);

    Node* head2 = new Node(3);
    head2->next  = new Node(6);
    head2->next->next = new Node(9);
    head2->next->next->next = head1->next;

    cout << intersectPoint(head1, head2);
}