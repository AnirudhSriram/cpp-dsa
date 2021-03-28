#include <iostream>
#include <stdio.h>  
using namespace std;

void merge(int arr[], int mid, int l, int r)
{
    int m1 = mid - l + 1;
    int m2 = r - mid;

    int a[m1], b[m2];

    for(int i = 0; i< m1; i++){
        a[i] = arr[l + i];
    }

    for(int i = 0; i < m2; i++){
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while(i < m1 && j<m2){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            i++;
        }else{
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while(i < m1){
        arr[k] = a[i];
        i++;
        k++;
    }

    while(j < m2){
        arr[k] = b[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, mid, l, r);
    }
    else
    {
        return;
    }
}

int main()
{
    int arr[] = {1, 4, 3, 2, 7, 6, 9, 0};
    mergeSort(arr, 0, 7);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "\t";
    }
}