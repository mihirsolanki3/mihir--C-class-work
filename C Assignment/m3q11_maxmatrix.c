#include<stdio.h>

void main()
{
	int matr1[3][3];
	int i, j;
	
	printf("\n---------Module : 3 / Question : 11----------\n\n");
	printf("Enter Matrix Elements : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element[%d][%d] : ",i,j); 
			scanf("%d",&matr1[i][j]);
		}
	}
	printf("\nDisplay Matrix Elements : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matr1[i][j]);
		}
		printf("\n");
	}
	
	for (i=1;i<matr1[i][j];++i) 
	{
       for(j=0;j<matr1[i][j];++j)
       {
       	 if (matr1[0][0] < matr1[i][j]) 
		 {
        	matr1[0][0] = matr1[i][j];
    	 }
	   }
    } 
    printf("\nMax number elements of Matrix : %d",matr1[0][0]);
}