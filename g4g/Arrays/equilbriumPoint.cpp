#include<iostream>
#include<stdio.h>
using namespace std;


// int equilibriumPoint(long long a[], int n) //O(n2)
// {
//     if(n == 1) {
//         return 1;
//     }

//     int countl, countr;
//     for(int i = 1; i<n-1;i++){
//         countl = 0;
//         countr = 0;
//         for(int j = 0; j < n; j++){
//             if(j < i){
//                 countl+= a[j];
//             }else if(j > i){
//                 countr+=a[j];
//             }
//         }
//         if(countr == countl){
//             return i+1;
//         }
//     }
//     return -1;
// 

int equilibriumPoint(long long a[], int n) {
    if(n == 1){
        return 1;
    }else if(n == 2){
        return -1;
    }else{
        int lcount = a[0];
        int rcount = 0;
        int mid = 1;
        for(int i = 2; i< n; i++){
            rcount += a[i];
        }
        while(mid < n){
            if(lcount == rcount){
                return mid+1;
            }else{
                lcount+=a[mid];
                mid+=1;
                rcount -= a[mid];
            }
        }
        return -1;
    }

}


int main(){
    long long a[] = {1,3,5,2,2};
    int n = 5;
    cout << equilibriumPoint(a, n);
}