#include <stdio.h>
int removeElement(int* nums, int numsSize, int val){
    int read, write=0; 
    
    for ( read = 0; read < numsSize; read++ ) {

        if( nums[read] != val ){
            nums[write] = nums[read];
            write++;
        }
    }
    return write;
}
int main() {
	int nums[] = {6,5,6,7,8,9,2};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int l;
	printf(" ORIGINAL ARRAY : ");
	for ( l = 0; l < numsSize; l++)
	    printf("%d  ", nums[l]);

	int val = 6;
	int k =  removeElement(nums, numsSize, val);
	
	printf(" \n Target to Delete : %d \n" , val);
    printf(" MODIFIED ARRAY : ");
	for ( l = 0; l < k; l++) {
	 printf(" %d  ",nums[l]);}
	 printf(" \n");
	return 0;
}
