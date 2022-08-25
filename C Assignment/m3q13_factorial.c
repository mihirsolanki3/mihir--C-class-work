#include<stdio.h>

int fact (int);  

int main()  
{  
    int n,f;
	printf("\n---------Module : 3 / Question : 13----------\n");  
    printf("\nEnter the number whose factorial you want to calculate? : ");  
    scanf("%d",&n);
	  
    f = fact(n);  
    printf("\nfactorial = %d",f);  
}

int fact(int n)  
{  
    if (n==0)  
    {  
        return 0;  
    }  
    else if ( n == 1)  
    {  
        return 1;  
    }  
    else   
    {  
        return n*fact(n-1);  
    }  
}  
