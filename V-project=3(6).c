#include<stdio.h>

main()
{
	int n;
	int fact=1;
	printf("Enter any number\n");
	scanf("%d",&n);
	
	do
	{
		fact=fact*n;
		n--;
	}while(n>0);
	printf("factorial of is= %d",fact);
}
