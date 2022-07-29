#include<stdio.h>

void displayarray(int *p)
{
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(p + i));
	}
	
}

void main()
{
	int arr[5] = {10,20,30,40,50};
	
	displayarray(arr);
}