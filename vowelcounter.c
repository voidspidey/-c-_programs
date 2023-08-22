/* program for counting vowels in line*/

#include<stdio.h>
#include<string.h>

int main()
{
	int i , vowel= 0 ; /*declaring variables*/
	char name[500]; 
	
	printf("enter the string:");
	fgets(name, sizeof(name), stdin);
	
	for (i = 0; name[i] != '\0'; ++i)   /*intializing i=0 with condition till "i "is not equal to "\0" */
	{
		name[i] = tolower(name[i]) ;  /* this is for lowering all uppercase letters */
	
		if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' ||name[i] == 'u' || name[i] == 'o' )
		
			++vowel;	
	}
		printf("the no. of vowels are %d",vowel);
}
