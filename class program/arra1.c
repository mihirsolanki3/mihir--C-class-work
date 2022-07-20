#include<stdio.h>

void main()
{
	int a[5]={10,20,30,40,50};
	int i;
	int *p;
	p = a;
	for(i=0;i<5;i++)
	{
		printf("\na[%d] = %d",i,*p+i);
	}
	
	
	
	
	
	
}