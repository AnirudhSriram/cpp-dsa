#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
struct Node
{
  int data;
  struct Node *next;
  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

/*You are required to complete this method */
bool isPalindrome(Node *head)
{
  vector<int> s;

  while (head)
  {
    s.push_back(head->data);
    head = head->next;
  }

  int size = s.size();
  int x = 0;
  if (size % 2 == 0)
  {
    
    size = size / 2;

    while (x < size)
    {
      int t1 = s.front();
      int t2 = s.back();
      if (t1 == t2)
      {
        x += 1;
      }
      else
      {
        return 0;
      }
      s.erase(s.begin());
      s.pop_back();
    }
    return 1;
  }
  else
  {
    while (x < size - 1)
    {
      int t1 = s.front();
      int t2 = s.end();
      if (t1 == t2)
      {
        x += 1;
      }
      else
      {
        return 0;
      }
      s.erase(s.begin());
      s.pop_back();
    }
    return 1;
  }
}