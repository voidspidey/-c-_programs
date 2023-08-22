/* counting number of notes used */

#include<stdio.h>

 int main()
 {
 	int i,num ;
 	int c100 = 0, c50 = 0, c20 = 0 , c10=0, c5=0;
 	printf("Enter the Number :");
 	scanf("%d",&num);
 	for(i=0; i<100; i++)
 	{
 		if(num>=100)
 		{num= num-100;
 		c100++;
		 }
	   else	if(num>=50)
		{ num=num-50;
		  c50++;
		 } 
		 else if(num>=20)
		 { num=num-20;
		   c20++;
		 }
		else if (num>=10)
		 {num=num-10;
		 c10++;
		 }
		 else if(num>=5)
		 {num=num-5;
		 c5++;
		 }
	 }
	 
	 printf("\ncount of 100 is %d",c100);
	 printf("\ncount of 50 is %d",c50);
	 printf("\ncount of 20 is %d",c20);
	 printf("\ncount of 10 is %d",c10);
	 printf("\ncount of 5 is %d",c5);
	 printf("\nRemaining num is %d",num);
	 return 0;
 }
