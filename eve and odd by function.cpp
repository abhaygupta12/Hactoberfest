#include<stdio.h>
int check()
{
	int a ;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a%2==0)
	 return 2;
	 else 
	 return 0;
}
 void main()
 {
 	int b =check();
 	// printf("%d\n",b);  
// We don't need this printf actually because we are printing the number itself so printing 2 is just extra code here
 	if(b==2)
 	printf("Even");
 	else 
 	printf("odd");
 	
 }
