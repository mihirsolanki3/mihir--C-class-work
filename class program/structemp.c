#include<stdio.h>

struct Employee
{
	int eid;
	char name[10];
	float esal;
};

void main()
{
	struct Employee e1;
	
	printf("Enter Id : ");
	scanf("%d",&e1.eid);
	printf("Enter Name : ");
	scanf("%s",&e1.name);
	printf("Enter Salary : ");
	scanf("%f",&e1.esal);
	
	printf("\n\nId = %d",e1.eid);
	printf("\nName = %s",e1.name);
	printf("\nSalary = %0.2f",e1.esal);
}