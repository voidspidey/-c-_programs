/* program to find maximun water contained in the container*/

#include <stdio.h>

int min (int *x , int *y) {
	if (*x < *y)
		return *x;
	else
		return *y;
}

int maxarea(int *Height, int Heightsize) {
     	int i, j, max;
        i = 0;
		j = Heightsize - 1;
		max = 0;
	
		while ( j > i)
		{
            int water = min(&Height[i], &Height[j] ) * (j - i);	

		    if (Height[i] <= Height[j])
			    i++;
		    else
			    j--;
		    if (max < water)
			    max = water;
		}
		return max;
}

int main(void) {
	int Height[] = {1,8,6,2,5,4,8,3,7};
	int Heightsize = sizeof(Height)/sizeof(Height[0]);
      
 	printf("%d\n", maxarea(Height, Heightsize));
}

