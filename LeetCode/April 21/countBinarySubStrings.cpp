#include <iostream>
#include <stdio.h>
using namespace std;

int countBinarySubstrings(string s)
{
    int l = s.length();
    int count = 0;
    int prev = 0;
    int curr = 1;
    for(int i =1; i< l; i++){
        if(s[i] == s[i-1]){
            curr+=1;
        }else{
            count+= min(curr, prev);
            prev = curr;
            curr = 1;
        }
    }

    return count + min(prev, curr);
}


int main(){
    cout << countBinarySubstrings("00110");
}

