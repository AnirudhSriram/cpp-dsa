#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int MissingNumber(vector<int>& array, int n) {
    int total = 0;
    int counter = 1;
    int arrived = 0;
    for(int it:array){
        total +=counter;
        counter++;
        arrived += it;
    }
    total += counter;
    return total - arrived;
}

int main(){
    vector<int> a = {1,2,3,5};
    cout << MissingNumber(a, 5);
}