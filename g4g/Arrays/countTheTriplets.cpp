#include <iostream>
#include <stdio.h>
using namespace std;
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int l, int r){
	int pivot = arr[r];
	int i = (l-1);

	for(int j = l; j < r; j++){
		if (arr[j] <= pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}

	swap(&arr[i+1], &arr[r]);
	return(i+1);
}

void quickSort(int arr[], int l, int r){
	if(l<r){
		
		int pi = partition(arr, l, r);

		quickSort(arr,l, pi-1);
		quickSort(arr, pi+1, r);

	}

}

	int countTriplet(int arr[], int n)
	{
	    quickSort(arr,0,n-1);
		int triplets = 0;
		int target = n - 1;
		while(target > 1){
			int i = 0; 
			int targetVal = arr[target];
			int j = target - 1;
			while(i<j){
				int tempSum = arr[i] + arr[j];
				if(tempSum == targetVal ){
					triplets +=1;
				}else if(tempSum > targetVal){
					j -- ;
				}else{
					i++;
				}
			}
			target -- ;
		}

		return triplets;

	}

int main()
{
	int arr[] = {14, 3, 6, 8, 11, 16} ;
	cout<< countTriplet(arr,6);
	

}