#include<stdio.h>
#include<string.h>

struct Employee
{
	int eid;
	char name[10];
	float esal;
};

void main()
{
	int i;
	struct Employee e1[5];
	
	printf("\nEnter Employee Detail.\n");
	for(i=0;i<3;i++)
	{
	printf("\nEnter Id : ");
	scanf("%d",&e1[i].eid);
	printf("Enter Name : ");
	scanf("%s",&e1[i].name);
	printf("Enter Salary : ");
	scanf("%f",&e1[i].esal);
	}
	
	printf("\nEmployee Detail List.\n");
	for(i=0;i<3;i++)
	{
	printf("\nId = %d",e1[i].eid);
	printf("\nName = %s",e1[i].name);
	printf("\nSalary = %0.2f\n",e1[i].esal);
		
	}
}