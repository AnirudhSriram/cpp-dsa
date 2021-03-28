#include <iostream>

#include <stdio.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int m1 = mid - l + 1;
    int m2 = r - mid;

    int arr1[m1], b[m2];

    for (int i = 0; i < m1; i++)
    {
        arr1[i] = arr[l + i];
    }

    for (int i = 0; i < m2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
    else
    {
        return;
    }
}

int main()
{
    int arr[] = {5, 3, 2, 1, 6, 5, 9, -8};
    int n = 8;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}