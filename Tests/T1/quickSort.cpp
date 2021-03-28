#include <iostream>
#include <stdio.h>
using namespace std;


void quickSort(int arr[], int l, int r)
{
    if(l < r){
        int pivot = arr[l];
        int swapIndex = l+1;
        int temp;
        for(int i = l+1; i< r; i++){
            if(arr[i] < pivot){
               temp = arr[swapIndex];
                arr[swapIndex] = arr[i];
                arr[i] = temp;
                swapIndex += 1;
            }
        }
        temp = arr[swapIndex - 1];
        arr[swapIndex-1] = pivot;
        arr[l] = temp;

        quickSort(arr, l, swapIndex - 1);
        quickSort(arr, swapIndex, r);
    }
}

int main()
{
    int arr[] = {1, 4, 3, 2, 7, 6, 9, 0};
    quickSort(arr, 0,8);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "\t";
    }
}