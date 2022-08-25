#include<stdio.h>

void main()

{
	int i, n, flag=0; 
	printf("\n---------Module : 3 / Question : 2----------\n\n");
	printf("Enter a No. : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n % i == 0)
		{
			flag++;
		}
	}
	
	if(flag == 2)
	{
		printf("\nIt is a prime No.");
	}
	else
	{
		printf("\nIt is not a prime No.");
	}
}