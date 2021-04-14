#include <iostream>
#include <stdio.h>

using namespace std;

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pivot = arr[l];
        int swapIndex = l + 1;
        int temp;
        for (int i = l + 1; i < r; i++)
        {
            if (arr[i] < pivot)
            {
                temp = arr[swapIndex];
                arr[swapIndex] = arr[i];
                arr[i] = temp;
                swapIndex++;
            }
        }
        temp = arr[swapIndex - 1];
        arr[swapIndex - 1] = pivot;
        arr[l] = temp;
        quickSort(arr, swapIndex, r);
    }
}

int main()
{
    int arr[] = {-19, 1, 2, 6, -5, 5};
    int n = 6;
    quickSort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}