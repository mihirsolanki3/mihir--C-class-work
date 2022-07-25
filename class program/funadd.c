#include<stdio.h>

// cat2 >> No return type and with parameter

void add(int a,int b)
{
	printf("\nAddition is %d",(a+b));
}
	
void sub(int a,int b)
{
	printf("\nSubtraction is %d",(a-b));
}

void multi(int a,int b)
{
	printf("\nMultiplication is %d",(a*b));
}

void div(int a,int b)
{
	printf("\nDivision is %0.2f",(a/(float)b));
}

void main()
{
	int a, b;
	printf("\nEnter a No.1 : ");
	scanf("%d",&a);
	printf("Enter a No.2 : ");
	scanf("%d",&b);
	add(a,b);
	sub(a,b);
	multi(a,b);
	div(a,b);
}
      