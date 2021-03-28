#include<iostream>
#include<stdio.h>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i = 1; i< n; i++){
        int j  = i - 1;
        int temp = arr[i];
        while(j<i && arr[j] > temp && j>=0){
            arr[j+1] = arr[j];
            j = j - 1 ;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[] = {5,3,2,1,6,5,9,-8};
    int n = 8;
    insertionSort(arr,n);
    for(int i = 0; i< n; i++){
        cout << arr[i];
    }
}