#include<stdio.h>

main()
{
     int n, reverse=0,remainder,original;
     
    
    printf("Enter your value= ");
    scanf("%d", &n);
    original = n;

    
    while (n != 0)
	{
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    
    if (original == reverse)
    {
	
        printf("%d is a palindrome=", original);
    } 
    else
	{
	
        printf("%d is not a palindrome=", original);
    }
    
}
