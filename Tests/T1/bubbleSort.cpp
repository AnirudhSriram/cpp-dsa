#include <iostream>
#include <stdio.h>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    bool sorted = false;
    while(!sorted){
        sorted = true;
        for(int i = 0;i<n-1;i++){
            if(arr[i] > arr[i+1]){
                swap(&arr[i], &arr[i+1]);
                sorted = false;
            }
        }
    }
}

int main()
{
    int arr[] = {1, 4, 3, 2, 7, 6, 9, 0};
    bubbleSort(arr, 8);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "\t";
    }
}