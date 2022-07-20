#include <stdio.h>

void main()

{
	int arr1[5],i;
	
	printf("Accept Array Elements : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Array 1 Element[%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("Display Array Elements : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Array  Element[%d] : %d\n",i,arr1+i);		
	}
	
	
}