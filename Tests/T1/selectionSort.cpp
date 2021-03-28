#include <iostream>
#include <stdio.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    int j = 0;
    int temp;
    int minIndex = 0;
    while  (j < n)
    {
        int min = INT_MAX;
        for (int i = j; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                minIndex = i;
            }
        }
        temp = arr[j];
        arr[j] = arr[minIndex];
        arr[minIndex] = temp;
        j++;
    }
}

int main()
{
    int arr[] = {1, 4, 3, 2, 7, 6, 9, 0};
    selectionSort(arr, 8);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "\t";
    }
}