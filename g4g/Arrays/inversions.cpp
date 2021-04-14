#include <iostream>
#include <stdio.h>

using namespace std;
long long int merge(long long int arr[], long long int l, long long mid, long long r)
{
    long long int tempCount = 0;
    long long int m1 = mid - l + 1;
    long long int m2 = r - mid;
    long long int a[m1], b[m2];

    for (int i = 0; i < m1; i++)
    {
        a[i] = arr[i + l];
    }

    for (int i = 0; i < m2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    long long int i = 0;
    long long int j = 0;
    long long int k = l;

    while (i < m1 && j < m2)
    {
        if (a[i] > b[j])
        {
            tempCount += mid  - i;
            arr[k] = b[j];
            j++;
        }
        else
        {
            arr[k] = a[i];
            i++;
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
    return tempCount;
}

long long int mergeSort(long long arr[], long long l, long long r)
{
    long long int temp = 0;
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        temp += mergeSort(arr, l, mid);
        temp += mergeSort(arr, mid + 1, r);
        temp += merge(arr, l, mid, r);
    }
    return temp;
}

long long int inversionCount(long long arr[], long long N)
{
    return mergeSort(arr, 0, N);
}

int main()
{
    long long arr[] = {2,3,4,5,6};
    long long n = 5;
    cout << inversionCount(arr, n);
}