/* program to reverse a word */

#include<stdio.h>
#include<string.h> 
 
  int main()  {
  	int i , temp , len = 0 ;
  	char word[500];
  	printf("ENTER the Word:") ;
  	fgets(word, sizeof(word),stdin) ;
  	
	for(i = 0; word[i] != '\n'; i++) {
            len++ ; 	
         }
        
	for(i = 0; i < len/2 ; i++)  {
     	    temp = word[i] ;
     	    word[i] = word[len-1-i];
     	    word[len-1-i] = temp;
     	 }
        printf("the count is : %d\n" , len) ;
        printf("the reverse is %s\n", word);
        return 0;
  }
