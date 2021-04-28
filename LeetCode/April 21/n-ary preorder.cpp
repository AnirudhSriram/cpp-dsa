#include <iostream>
#include <stdio.h>
#include <vector>
#include<stack>
using namespace std;

class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

vector<int> preorder(Node *root)
{   
    vector<int> out;
    if(!root) return out;

    stack<Node*> temp;
    stack<Node*> s;
    s.push(root);

    while(!s.empty()){
        out.push_back(s.top()->val);
        if(root->children.size()){
            for(auto it: root->children){
                    temp.push(it);
            }
            while(!temp.empty()){
                s.push(temp.top());
                temp.pop();
            }
        }
    }

}
