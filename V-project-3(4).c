#include<stdio.h>

main()
{

	 int z,a=0;
	 printf("enter value =");
	 scanf("%d",&z);
	 
	while(z>0)
	{
	 	z=z/10;
	 	a++;
	
    }
    printf("count the number=%d",a);
	 

}
