#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int heightChecker(vector<int> arr, int n){
    vector<int> cpy = arr;
    int counter = 0;
    sort(cpy.begin(), cpy.end());
    for(vector<int>::iterator it = arr.begin(), cpi = cpy.begin(); it < arr.end(), cpi < cpy.end(); it++, cpi++ ){
        if(it != cpi){
            counter++;
        }
    }
    return counter;
}

int main(){
    vector<int> arr;
    int n = 6;

    int x[] = {1,1,4,2,1,3};
    for(int i = 0; i < n; i++){
        arr.push_back(x[i]);
    }
    cout << heightChecker(arr, n);
}