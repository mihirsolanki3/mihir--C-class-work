#include<stdio.h>   

void main()

{
	int a, b, sum;
	
	int *ptr1, *ptr2;
	ptr1 = &a;
	ptr2 = &b;
	
	printf("\n---------Module : 3 / Question : 17----------\n");
	
	printf("\nEnter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	
	sum = *ptr1 + *ptr2;
	
	printf("\nAddition : %d",sum);
}