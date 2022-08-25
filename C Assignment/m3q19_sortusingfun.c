#include<stdio.h>

void sort()
{
	int i, j, a, arr[100]; 
	
	printf("\nEnter Elements of Number : ");
	scanf("%d",&arr[100]);
	
	for(i=0;i<arr[100];i++)
	{
		printf("Enter Elements [%d] : ",i);
		scanf("%d",&arr[i]);
		for (j=i+1;j<arr[i];++j)
    	{
        	if (arr[i]>arr[j]) 
        	{
            	a =  arr[i];
            	arr[i] = arr[j];
            	arr[j] = a;
        	}
    	}
    }
		
    printf("The array of elements arranged in ascending order\n");
    for (i=0;i<arr[i];++i)
    {
    	printf("%d\n",arr[i]);
	}
}

void main()
{
	printf("\n---------Module : 3 / Question : 19----------\n");
	sort();
}