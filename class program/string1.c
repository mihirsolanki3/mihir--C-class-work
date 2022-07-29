#include<stdio.h>
#include<string.h>

void main()
{
	char name[10] = "Mihir";
	char sname[10] = " Solanki";
	char empty[10];
	printf("String Length : %d",strlen(name));
//	printf("\n\nString Reverse : %s",strrev(name));
	printf("\n\nString Concatenate : %s",strcat(name,sname));
	strcpy(empty,name);
	printf("\n\nString Copy : %s",empty);
	printf("\n\nString Compare : %d",strcmp(name,sname));
//	printf("\n\nString UpperCase : %s",strupr(name));
//	printf("\n\nString LowerCase : %s",strlwr(sname));
	
	
}