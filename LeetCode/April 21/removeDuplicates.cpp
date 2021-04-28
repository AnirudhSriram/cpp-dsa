#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;

string removeDuplicates(string s, int k)
{
    string outstr = s;
    vector<pair<char, int>> arr;
    bool removals = true;
    while (removals)
    {
        removals = false;
        arr.clear();
        int strlen = outstr.length();
        char x = outstr[0];
        int count = 0;
        for (int i = 0; i < strlen; i++)
        {
            if (outstr[i] == x)
            {
                count += 1;
            }
            else
            {
                arr.push_back(make_pair(x, count));
                count = 1;
                x = outstr[i];
            }
        }
        arr.push_back(make_pair(x, count));
        int reps = 0;
        outstr = "";

        for (vector<pair<char, int>>::iterator it = arr.begin(); it < arr.end(); it++)
        {
            if (it->second % k != 0)
            {   
                reps = it->second % k;
                while (reps)
                {
                    outstr += it->first;
                    reps-=1;
                }
            }else{
                removals = true;
            }
        }

    }

    return outstr;
}

int main()
{
    cout << removeDuplicates("deeedbbcccbdaa", 3);
}