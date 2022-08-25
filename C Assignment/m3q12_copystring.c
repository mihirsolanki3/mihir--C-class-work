#include<stdio.h>

void st()
{
	char name[10] = "Mihir";
	char sname[10] = " Solanki";
	char empty[10];
	
	printf("\nName : %s",name);
	printf("\nSurName : %s",sname);
	
	printf("\n\nString Concatenate : %s",strcat(name,sname));
	
	strcpy(empty,name);
	printf("\n\nString Copy : %s",&empty);
}

void main()
{
	printf("\n---------Module : 3 / Question : 12----------\n");
	st();
}