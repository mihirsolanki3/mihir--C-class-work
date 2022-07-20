#include <stdio.h>

void main()
{
	int n1[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&n1[i]);
	}
	
	printf("\nElements in Array \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(n1+i));
	}
}