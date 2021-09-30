#include<stdio.h>
int check()
{
	int a ;
	printf("enter a number:");
	scanf("%d",&a);
	if(a%2==0)
	 return 2;
	 else 
	 return 0;
}
 main()
 {
 	int b =check();
 	printf("%d\n",b);
 	if(b==2)
 	printf("Even");
 	else 
 	printf("odd");
 	
 }
