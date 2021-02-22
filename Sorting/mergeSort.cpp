#include<stdio.h>
#include<iostream>

void merge(int arr[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m ;

    int a[n1];
    int b[n2];

    for(int i = 0; i < n1; i++){
        a[i] = arr[l+i];
    }

    for (int j = 0; j < n2; j++){
        b[j] = arr[m+1+j];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while(i < n1 && j < n2){
        if (a[i] <= b[j]){
            arr[k] = a[i];
            i+=1;
        }else{
            arr[k] = b[j];
            j+=1;
        }
        k+=1;
    }

    while (i < n1){
        arr[k] = a[i];
        i+=1;
        k+=1;
    }

    while (j < n2){
        arr[k]= b[j];
        j+=1;
        k+=1;
    }
}


void mergeSort(int arr[], int l, int r){
    if(l>=r){
        return;
    }
    int m = l + (r-l)/2 ;
    mergeSort(arr, l, m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

int main(){
    int arr[5] = {1,7,2,6,5};
    int n  = 5;

    mergeSort(arr, 0,n);
    for(int i = 0; i < n ; i++){
        std::cout << arr[i];
    }
}

