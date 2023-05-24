#include<stdio.h>

main()
{
	int n, sum,a, fg,lg;
	printf("enter value=");
	scanf("%d",&n);
	
	lg=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	fg=n;
	sum=fg+lg;
	printf("sum of first and last digit=");
	printf("%d",sum);
}
