#include<stdio.h>

void main()
{
	int n1,n2,choice;
	printf("Enter A , B : ");
	scanf("%d%d",&n1,&n2);
	printf("\nA = %d, B = %d",n1,n2);
	
	printf("\n-------Choice Calculator---------\n");
	printf("\nPress 1.Addtion");
	printf("\nPress 2.Subtraction");
	printf("\nPress 3.Multiplication");
	printf("\nPress 4.Division");
	
	printf("\nEnter your Choice ?");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\nAddition is %d",(n1+n2));
	}
	else if(choice == 2)
	{
		printf("\nSubtraction is %d",(n1-n2));
	}
	else if(choice==3)
	{
		printf("\nMultiplication is %d",(n1*n2));
	}
	else if(choice ==4)
	{
		printf("\nDivision is %.2f",(n1/(float)n2));
	}
	else
	{
		printf("\nInvalid Choice");
	}
	
	
}