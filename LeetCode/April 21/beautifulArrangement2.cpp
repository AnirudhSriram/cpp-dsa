#include<iostream>
#include<stdio.h>
#include <vector>

using namespace std;

vector<int> constructArray(int n, int k)
{
    vector<int> out(n);
    for(int i = 0, a = 1, z = k + 1; i <= k; i++){
        if(i%2 == 1){
            out[i] = z;
            z--;
        }else{
            out[i] = a;
            a++;
        }
    }
    for(int i = k+1; i < n; i++){
        out[i] =i+1;
    }

    return out;
}


int main(){
    vector<int> x = constructArray(3,1);

}