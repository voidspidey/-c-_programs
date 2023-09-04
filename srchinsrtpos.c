/* This is programm to serach insert position of the given element*/

#include <stdio.h>

int binarySearch(int array[], int x, int beg, int end) {
	int temp = 0;
  while (beg <= end) {
    int mid = (beg + end) / 2;
     temp= mid;
    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      beg = mid + 1;

    else
      end = mid - 1;
  }
   if ( array[end] < x ){
  	temp = temp +1;
  	return temp;}
  else
  	return temp;
  
}

int main(void) {
  int array[] = {1,3,5,6};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 0;
  int result = binarySearch(array, x, 0, n - 1);
  printf("Element is found at index %d \n", result);
  return 0;
}
