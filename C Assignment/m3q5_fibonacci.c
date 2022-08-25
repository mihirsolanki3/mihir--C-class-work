#include<stdio.h>

int fibonacci(int n);
void main()
{
	int n, f, i, a=0;
	printf("\n---------Module : 3 / Question : 5----------\n\n");
	printf("Enter the value of N? : ");
	scanf("%d",&n);
    f = fibonacci(a);  
//    printf("Fibonacci series : %d",f); 
    
    for(i=1;i<=n;i++)
    {
	    printf("%d",f);
	    a++;
    }
    return 0;
}

int fibonacci(int n)
{
	if(n == 0)  
    {  
        return 0;  
    }  
    else if(n == 1)  
    {  
        return 1;   
    }  
    else  
    {  
        return fibonacci(n-1) + fibonacci(n-2);  
    }  
}