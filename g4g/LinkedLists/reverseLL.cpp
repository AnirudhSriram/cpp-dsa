#include<iostream>
#include<stdio.h>
#include <vector> 
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* reverseLinkedList(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}


int main(){


    Node* head = new Node(0);
    Node* headcpy = head;
    for(int i = 1;i<= 5; i++){
        headcpy->next = new Node(i);
        headcpy = headcpy->next;
    }
    headcpy->next = NULL;
    headcpy = head;

    while(headcpy){
        cout<< headcpy->data << '\t' ;
        headcpy = headcpy->next;
    }

    headcpy = reverseLinkedList(head);
    cout << "\n";
    while(headcpy){
        cout<< headcpy->data << '\t' ;
        headcpy = headcpy->next;
    }

    


}