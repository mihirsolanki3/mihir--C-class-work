#include <stdio.h>

void main()
{
	int arr1[5],arr2[5],arr3[5]; 
	int i;
	
	printf("Array 1 Element\n");
	for(i=0;i<5;i++)
	{
		printf("Enter Element [%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("Array 2 Element\n");
	for(i=0;i<5;i++)
	{
		printf("Enter Element [%d] : ",i);
		scanf("%d",&arr2[i]);
	}
	
	printf("\nAddition of Array 1 and Array 2 : \n\n");	
	for(i=0;i<5;i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		printf("Sum[%d] = %d\n",i,arr3[i]);
	}
		
}