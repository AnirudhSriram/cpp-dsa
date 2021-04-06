#include <iostream>
#include <stdio.h>
#include<vector>
using namespace std;

vector<int> leaders(int a[], int n)
{
    vector<int> out;
    out.insert(out.begin(),a[n-1]);
    int max = a[n-1];
    int j = n - 2;
    while(j >= 0){
        if(a[j] >= max){
            max = a[j];
            out.insert(out.begin(),max);
        }
        j--;
    }

    return out;
    
}

int main(){
    int arr[] = {16,17,4,3,5,2};
    int n = 6;
    vector<int> x = leaders(arr,n);
    for(vector<int>::iterator it = x.begin(); it != x.end(); it++  ){
        cout << *it;
    }
}