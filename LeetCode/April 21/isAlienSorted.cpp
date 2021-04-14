#include<iostream>
#include<stdio.h>
#include<stack>
#include<vector>
#include <iterator>
using namespace std;

bool isAlienSorted(vector<string> &words, string order)
{

    stack<string> s;
    s.push(words.front());
    vector<string>::iterator it = words.begin();
    it++;
    while(it != words.end()){
        string word = *it;
        string top = s.top();
        for(int i = 0, j = 0; i < word.length(), j < top.length(); i++, j++){
            int pos1 = order.find(word[i]) ;
            int pos2 = order.find(top[j])  ;
            if(pos1 < pos2){
                return false;
            }else if(pos2 < pos1){
                break;
            }
        }
        s.push(word);
        it++;
    }
    return true;
}

int main(){
    vector<string> words ;
    words.push_back("word");
    words.push_back("world");
    words.push_back("row");

    cout<< isAlienSorted(words, "worldabcefghijkmnpqstuvxyz");
}