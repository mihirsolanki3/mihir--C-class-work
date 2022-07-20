#include <stdio.h>

void main()
{
	int i;
	int arr1[5],arr2[5];
	
	printf("Accept Array1 Elements : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Array 1 Element[%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n\nAccept Array2 Elements : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Array 2 Element[%d] : ",i);
		scanf("%d",&arr2[i]);
	}
		
	printf("\n\nSum of Array1 and Array 2 : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Sum[%d] = %d\n",i,arr1[i] + arr2[i]);
	}
}