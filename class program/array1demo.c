#include <stdio.h>

void main()
{
	//int marks[5] = {45,47,98,78,65};
	int arr[5];
//	arr[0] = 54;
//	arr[1] = 23;
//	arr[2] = 36;
//	arr[3] = 69;
//	arr[4] = 45;
	printf("Enter Elements : \n\n");
	scanf("%d",&arr[0]);
	scanf("%d",&arr[1]);
	scanf("%d",&arr[2]);
	scanf("%d",&arr[3]);
	scanf("%d",&arr[4]);
	
	printf("%d\t",arr+0);
	printf("%d\t",arr+1);
	printf("%d\t",arr+2);
	printf("%d\t",arr+3);
	printf("%d\t",arr+4);
	
}