#include<stdio.h>

main()
{
	int first=1,second=2,third;
	
	int n,i;
	printf("enter num. of terms=");
	scanf("%d",&n);
	
	printf("%d%d",first,second);
	
	for(i=3;i<=n;i++)
	{
		third=first+second;
		printf("%d",third);
		first=second;
		second=third;
	}
}
