#include<iostream>
#include<stdio.h>
using namespace std;


void merge(int arr[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int a[n1], b[n2];

    for(int i =0; i < n1; i++){
        a[i] = arr[i + l];
    }

    for(int i = 0; i< n2; i++){
        b[i] = arr[m + 1 + i];
    }

    int i = 0; 
    int j = 0;
    int k = l;

    while(i < n1 && j < n2){
        if(a[i]  < b[j]){
            arr[k] = a[i];
            i++;
        }else{
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = a[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = b[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int l, int r){
    if(l< r){
        int mid = l + (r - l) /2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }


}


int main(){
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    mergeSort(arr,0,7);

    for(int i = 0; i< 7; i++){
        cout << arr[i] << "\t";
    }
}