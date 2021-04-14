#include <iostream>
#include <stdio.h>
using namespace std;

void sort012(int a[], int n)
{
    int arr[3];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            arr[0] += 1;
        }
        else if (arr[i] == 1)
        {
            arr[1] += 1;
        }
        else
        {
            arr[2] += 1;
        }
    }
    // cout << arr[0] << "\t";
    // cout << arr[1] << "\t";
    // cout << arr[2] << "\t";
    // int j = 0;
    // for(int i = j; i < arr[0]; i++){
    //     a[i] = 0;
    //     j++;
    // }
    // cout << j << '\n';
    // for(int i = j; i < arr[1]; i++){
    //     a[i] = 1;
    //     j++;
    // }
    //    cout << j  << '\n';
}

int main()
{
    int z[] = {0, 2, 1, 2, 0};
    int n = 5;
    sort012(z, n);
}