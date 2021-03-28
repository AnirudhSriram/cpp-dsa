#include <iostream>
#include <stdio.h>

using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int local_max = 0;
    int global_max = INT_MIN;

    for(int i = 0; i < n; i++) {
        local_max = max(arr[i], arr[i]+ local_max);
        if(local_max > global_max){
            global_max = local_max;
        }
    }
   return global_max;
}


int main(){
    int arr[] = {1,2,3,-2,5};
    cout << maxSubarraySum(arr,5) ;
}