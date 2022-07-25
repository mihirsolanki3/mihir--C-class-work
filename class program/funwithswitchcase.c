#include<stdio.h>

// function with switch case

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
	int n1, n2, choice;
	
	printf("Enter A , B :  ");
	scanf("%d%d",&n1,&n2);
	
	printf("\nA : %d , B : %d",n1,n2);
	
	printf("\n\n-----------choice for Calculator------------\n");
	printf("\npress 1. Addition.\npress 2. Subtraction.\npress 3. Multiplication.\npress 4. Division.\n");
	
	printf("\nEnter your choice ? ");
	scanf("%d",&choice);
	
	switch (choice)
	{
	
	case 1 : printf("\nAddition is %d",(n1+n2));
	break;
	
	case 2 : printf("\nSubtraction is %d",(n1-n2));
	break;
	
	case 3 : printf("\nMultipliction is %d",(n1*n2));
	break;
	
	case 4 : printf("\nDivision is %.2f",(n1/(float)n2));
	break;
	
	default : printf("\nInvalid Choice");
	break;
	}
}