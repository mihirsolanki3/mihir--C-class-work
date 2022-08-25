#include<stdio.h>
   
void main() 
{
	int i,j,k;
	printf("\n---------Module : 3 / Question : 8----------\n\n");
	printf("------------Pyramid pattern - 3-------------\n\n");
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=5-i;k++)
		{
			printf("*");
		}
		printf("\n");	
	}
}