#include<Node.h>
#include<stack>


Node::Node* reverse(Node* head){

    std::stack <Node*> s;
    while(head){
        s.push(head);
        head = head->next;
    }
    int size = s.size()-1;
    Node* newHead = s.top();
    while(size>=1){
        Node* temp = s.top();
        s.pop();
        temp->next = s.top();
        size -=1;
    }
    s.top()->next = NULL;

    return newHead;

}