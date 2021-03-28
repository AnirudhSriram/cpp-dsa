#include<iostream>
#include<stdio.h>
using namespace std;
void insertionSort(int arr[], int n){
   int i, j, key ;

   for(i = 1; i< n; i++){
       j = i - 1;
       key = arr[i];
       while(j >= 0 && arr[j] > key){
           arr[j+1] = arr[j];
           j = j - 1;
       }
       arr[j+1] = key;
   } 
}

int main(){
    int arr[] = {1,4,3,2,7,6,9,0};
    insertionSort(arr,8);

    for(int i = 0; i< 8; i++){
        cout << arr[i] << "\t" ;
    }
}