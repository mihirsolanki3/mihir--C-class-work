#include<stdio.h>


void st()
{
	char name[10], sname[10];
	
	int *ptr1, *ptr2;
	ptr1 = &name[10];
	ptr2 = &sname[10];
	
	printf("\nEnter Name : ");
	scanf("%s",&name[10]);
	printf("Enter SurName : ");
	scanf("%s",&sname[10]);
	
//	strcat(*name,*sname);
	
	while(*ptr1!='\0')
	{
		ptr1++;
	}
	
    while(*ptr2!='\0')
    {
    	*ptr1=*ptr2;
    	ptr2++;
    	ptr1++;
    }
    *ptr1='\0';
    
	printf("\n\nString Concatenate : %s", name[10]);	
}

void main()
{
	printf("\n---------Module : 3 / Question : 18----------\n");
	st();
}