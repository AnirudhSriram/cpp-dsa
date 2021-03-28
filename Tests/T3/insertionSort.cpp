#include<iostream>
#include<stdio.h>

using namespace std;


void insertionSort(int arr[], int n){
    for(int i = 1; i< n; i++){
        int j = i - 1; 
        int key = arr[i];
        while(j >=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j -- ;
        } 
        arr[j+1] = key;
    }

}


int main(){
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;

    insertionSort(arr, n);
    for(int i = 0; i< n; i++){
        cout << arr[i] << "\t";
    }
}