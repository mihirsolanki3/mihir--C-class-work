#include<stdio.h>

int sum(int n);
void main()
{
	int n;
	printf("\n---------Module : 3 / Question : 7----------\n\n");
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	printf("\nSummation of Number : %d",sum(n));
	return 0;	 
} 

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	return (n%10 + sum(n/10));
}