#include <iostream>
#include <stdio.h>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int m1 =  m - l + 1;
    int m2 = r - m;

    int a[m1], b[m2];
    for(int i = 0; i< m1; i++){
        a[i] = arr[i + l];
    }

    for(int i =0; i < m2; i++){
        b[i] = arr[i + m + 1];
    }

    int i = 0; int j = 0; int k = l;

    while (i < m1 && j < m2)
    {
        if(a[i] < b[j]){
            arr[k] = a[i];
            i++;
        }else{
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < m1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < m2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
    
    
    


}

void mergeSort(int arr[], int l, int r) {
    if(l < r) {
        int mid = l + (r-l)/2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }else{
        return;
    }

}

int main()
{
    int arr[] = {-19, 1, 2, 6, -5, 5};
    int n = 6;
    mergeSort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}