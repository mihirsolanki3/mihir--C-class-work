#include<stdio.h>

void main()
{
	int i, j, a, arr[100];
	printf("\n---------Module : 3 / Question : 10----------\n\n"); 
	
	printf("Enter Elements of Number : ");
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