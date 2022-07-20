
#include <stdio.h>

void main()
{
	int a=9,b=0;
	
	if(a && b)  // AND Operator
	{
		printf("Line 1 is True");
	}
	else 
	{
		printf("Line 2 is False");
	}
	//a = 0;
	if(a || b)	// OR Operator
	{
		printf("\nLine 3 is True");
	}
	else 
	{
		printf("\nLine 4 is False");
	}
	
		if(!(a && b))  // NOT Operator
	{
		printf("Line 5 is True");
	}
	else 
	{
		printf("Line 6 is False");
	}
	
}
