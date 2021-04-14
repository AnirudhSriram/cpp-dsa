#include <iostream>
#include <stdio.h>

using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m)
{
    int last;
    for(int i = m-1; i>=0; i--){
        last = arr1[n-1];
        int j;
        for(j = n-2; j>=0 && arr1[j] > arr2[i]; j--){
            arr1[j+1] = arr1[j];
        }

        if(j!=n-2 || last > arr2[i]){
            arr1[j+1] = arr2[i];
            arr2[i] = last;
        }
    }
}

int main()
{

    long long  arr1[] = {1,3,5,7};
    long long arr2[] = {0,2,6,8,9};
    int m = 4;
    int n = 5;

    merge(arr1, arr2, m, n);

    for(int i = 0;i<m; i++){
        cout << arr1[i] << "\t";
    }

    for(int j = 0; j < n; j++){
        cout << arr2[j] << "\t";
    }

}