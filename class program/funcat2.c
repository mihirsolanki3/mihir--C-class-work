#include<stdio.h>

void add(int a,int b)
{
	printf("\nAddition = %d",(a+b));
}

void sub(int a,int b)
{
	printf("\nSubtraction = %d",(a-b));
}

void main()
{
	int a = 20,b = 10;
	add(a,b);
	sub(a,b);
}