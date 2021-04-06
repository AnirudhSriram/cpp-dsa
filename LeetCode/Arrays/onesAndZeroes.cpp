#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int findMaxForm(vector<string> &strs, int m, int n)
{
    int count = 0;
    int len = 0;
    int z = 0;
    int o = 0;
    for (auto &it : strs)
    {
        len = it.length();

        if (len <= (m + n))
        {
            for (int i = 0; i < len; i++)
            {
                if (it[i] == '0')
                {
                    z++;
                }
                else
                {
                    o++;
                }
            }
            if (z <= m && o <= n)
            {
                count++;
            }
            z = 0;
            o = 0;
        }
    }
    if(count == strs.size()){
        return count - 1;
    }
    return count;
}


int main(){
    vector<string> s;
    // "10","0001","111001","1","0"
    s.push_back("10");
    s.push_back("0001");
    s.push_back("111001");
    s.push_back("1");
    s.push_back("0");

    cout << findMaxForm(s, 4,3);

}