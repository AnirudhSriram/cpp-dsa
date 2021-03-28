#include<iostream>
#include<stdio.h>
using namespace std;


void selectionSort(int arr[], int n) {
    
    int i =0;
    while(i<n){
        int small = INT_MAX;
        int smallIndex = -1;
        for(int j = i; j< n; j++){
            if(arr[j] < small){
                small = arr[j];
                smallIndex = j;
            }
        }
        int temp = arr[i];
        arr[i]= small;
        arr[smallIndex]=temp;
        i++;
    }
}

int main(){
    int arr[] = {5,3,2,1,6,5,9,-8};
    int n = 8;
    selectionSort(arr,n);
    for(int i = 0; i< n; i++){
        cout << arr[i];
    }
}