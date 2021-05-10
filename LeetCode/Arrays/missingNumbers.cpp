#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    map<int,bool> x;
    vector<int> out;
    for(vector<int>::iterator it = nums.begin(); it != nums.end();it++){
        if(x.find(*it) == x.end()){
            x[*it] = true;
        }
    }

    int len = nums.size();
    int i = 1;
    while(i <= len){
        if(x.find(i) == x.end()){
            out.push_back(i);
        }
        i++;
    }

    return out;

}


int main(){
    vector<int> arr;
    int x[] = {4,3,2,7,8,2,3,1};
    for(int i = 0; i< 8; i++){
        arr.push_back(x[i]);
    }

    vector<int> ret = findDisappearedNumbers(arr);

    for(vector<int>::iterator it = ret.begin(); it != ret.end(); it++){
        cout << *it;
    }
}