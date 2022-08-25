#include<stdio.h>

void main()
{
	int i,j,n=1;
	printf("\n---------Module : 3 / Question : 8----------\n\n");
	printf("------------Pyramid pattern - 2-------------\n\n");
	
	for(i=1;i<=4;i++)
	{	
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}	                  
}