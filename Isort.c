/* insertion sort program*/

#include<stdio.h>

void isort(int arr[], int size); /*function for sorting array */

void printarr(int arr[],int size); /* funstion for printing array elements*/

int main(){
	int arr[] = {5,8,4,3,6,1};
	int size = sizeof(arr)/sizeof(arr[0]);
        isort( arr , size);
	printarr( arr, size);
	return 0;
}

void isort( int arr[], int size) {

	int i , key , j;

	for( i = 1; i< size; i++) {
		key = arr[i];
		j = i-1;

		while( j >= 0 && key < arr[j]) {

			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key ;
	}
}

void printarr( int arr[] , int size ) {
	int i ;
	for ( i = 0; i < size; i++) {
		printf("%d, ",arr[i]);
	}
	printf('\n');
}


