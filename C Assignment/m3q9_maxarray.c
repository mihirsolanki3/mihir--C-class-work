#include<stdio.h>

void main()
{
	int i, arr[100];
	printf("\n---------Module : 3 / Question : 9----------\n\n");
	
	printf("Enter Elements of Number : ");
	scanf("%d",&arr[100]);
	
	for(i=0;i<arr[100];i++)
	{
		printf("Enter Elements [%d] : ",i);
		scanf("%d",&arr[i]);	
	}
	for (i=1;i<arr[100];++i) 
	{
        if (arr[0] < arr[i]) 
		{
        	arr[0] = arr[i];
    	}
    }
    printf("Max number elements of array : %d",arr[0]);
}