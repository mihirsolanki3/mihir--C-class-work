#include<stdio.h>

void main() 
{
	int num, remainder,  reverse;
	printf("\n---------Module : 3 / Question : 6----------\n\n");
	printf("Enter a Number : ");
	scanf("%d",&num);
	
	while(num != 0) 
	{
    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num /= 10;
	}	
	printf("\nReversed Number : %d",reverse);
	return 0;
	
}