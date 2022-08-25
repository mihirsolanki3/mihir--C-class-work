#include<stdio.h>
#include<string.h>

struct Employee
{
	int eid;
	int age;
	char name[10];
	char add[100];
};

void main()
{
	int i;
	struct Employee e1[5];
	
	printf("\n---------Module : 3 / Question : 16----------\n");
	printf("\nEnter Employee Detail.\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter Id : ");
		scanf("%d",&e1[i].eid);
		printf("Enter Name : ");
		scanf("%s",&e1[i].name);
		printf("Enter Address : ");
		scanf("%s",&e1[i].add);
		printf("Enter Age : ");
		scanf("%d",&e1[i].age);
	}
	
	printf("\nEmployee Detail List.\n");
	for(i=0;i<5;i++)
	{
		printf("\nId = %d",e1[i].eid);
		printf("\nName = %s",e1[i].name);
		printf("\nAddress = %s",e1[i].add);	
		printf("\nAge = %d",e1[i].age);	
		printf("\n");
	}
}