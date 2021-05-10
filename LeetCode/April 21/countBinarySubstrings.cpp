#include <stdio.h>
#include <iostream>
using namespace std;

int countBinarySubstrings(string s)
{   
    int curr = 1;
    int prev = 0;
    int ans = 0;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            curr+=1;
        }else{
            ans += min(curr, prev);
            prev = curr;
            curr = 1;
        }
    }

    return ans + min(curr, prev);
}

int main()
{
    cout << countBinarySubstrings("00110011");
}