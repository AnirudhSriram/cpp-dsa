#include <iostream>
#include <stdio.h>
using namespace std;

void swap(&a, &b)
{
    int x = *a;
    *a = *b;
    *b = x;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pivot = arr[l];
        for (int i = l + 1; i < r; i++)
        {
            if (arr[i] > pivot)
            {
                swap(&(arr + i-1), &(arr + l))
            }
        }
        quickSort(arr, 0, l);
        
    }else{
        return;
    }
}

int main()
{
    int arr[] = {5, 3, 2, 1, 6, 5, 9, -8};
    int n = 8;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}