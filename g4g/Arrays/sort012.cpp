#include<iostream>
#include<stdio.h>
using namespace std;

void sort012(int a[], int n)
{
    int o = 0;
    int one = 0;
    int two = n-1;
    while(one <= two){
        if (a[one] == 0){
            int temp = a[o];
            a[o] = a[one];
            a[one] = temp;
            o++;
            if(one < o){
                one = o;
            }
        }else if(a[one] == 2){
            int temp = a[two];
            a[two] = a[one];
            a[one] = temp;
            two--;;
        }else{
            one++;
        }
        
    }
}


int main(){
    int arr[] = {1,0,1,2,1,0};
    int n = 6;
    sort012(arr, n);

    for(int i = 0; i<n; i++){
        cout << arr[i];
    }
}