#include<stdio.h>

int fibonacci(int);
  
void main ()  
{  
    int n,f;  
    printf("\n---------Module : 3 / Question : 14----------\n");
    printf("\nEnter the value of n? : ");  
    scanf("%d",&n);  
    
    f = fibonacci(n);  
    printf("\nFibonacci series : %d",f);  
}  

int fibonacci(int n)
{
	if (n==0)  
    {  
    	return 0;  
    }  
    else if (n == 1)  
    {  
        return 1;   
    }  
    else  
    {  
        return fibonacci(n-1)+fibonacci(n-2);  
    }  
}
