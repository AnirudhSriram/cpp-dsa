#include <iostream>
#include <stdio.h>

using namespace std;

void selectionSort(int arr[], int n)
{
    int i = 0;
    int temp;
    int smallIndex;
    smallIndex = -1;
    while (i < n - 1)
    {
        smallIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallIndex])
            {
                smallIndex = j;
            }
        }
        temp = arr[smallIndex];
        arr[smallIndex] = arr[i];
        arr[i] = temp;
        i++;
    }
}

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}