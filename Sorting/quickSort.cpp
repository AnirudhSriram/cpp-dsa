#include <stdio.h>
#include <iostream>

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pivot = arr[l]; //first item as pivot
        int swapIndex = l + 1;
        int temp;
        for (int i = l + 1; i < r; i++)
        {
            if (arr[i] < pivot)
            {
                temp = arr[swapIndex];
                arr[swapIndex] = arr[i];
                arr[i] = temp;
                swapIndex += 1;
            }
        }
        temp = arr[swapIndex - 1];
        arr[swapIndex - 1] = pivot;
        arr[l] = temp;
        
        quickSort(arr, l, swapIndex - 1);
        quickSort(arr, swapIndex, r);
    }
}

int main()
{
    int arr[7] = {99,80,30,90,40,50,70};
    int n = 7;
    quickSort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
        std::cout << "\t";
    }
}



