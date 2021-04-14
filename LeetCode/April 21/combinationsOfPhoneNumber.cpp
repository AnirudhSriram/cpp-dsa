#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

vector<string> letterCombinations(string digits)
{
    vector<string> out; // return vector
    queue<string> q;  // queue based backtracking 
    q.push(""); // important base condition 
    string arr[] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; // dictionary for mapping the digit with the alphabets
    for (int i = 0; i < digits.length(); i++)
    {
        string keys = arr[(int)(digits[i] - '0')]; // dont bother about this ... yucky syntax
        //below is the main condition .. i am checking if the items in the queue are equal to my i for example
        // if my input is "23"... when i is at 2 ... its value is 0 .. so i take out all items from q whose length is 0 and then 
        // append my alphabets corresponding to 2 ie 'a''b' and 'c' and so on. 
        
        while (q.front().length() == i) 
        {
            string temp = q.front();
            q.pop();
            for (int j = 0; j < keys.length(); j++)
            {
                temp.push_back(keys[j]);
                q.push(temp);
                temp = temp.substr(0,temp.length()-1);
            }
        }
    }
    while (!q.empty())
    {   if(q.front() != ""){
        out.push_back(q.front());
        }
        q.pop();
    }

    return out;
}

int main()
{
    vector<string> x = letterCombinations("23");
    for (auto it : x)
    {
        cout << it << endl;
    }
}