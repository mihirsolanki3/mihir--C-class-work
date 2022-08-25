#include<stdio.h>

int reverse(int num);
int Palindrome(int num);

int main()
{
    int num;
    printf("\n---------Module : 3 / Question : 15----------\n");
    
    printf("\nEnter a number : ");
    scanf("%d", &num);
    
    if(Palindrome(num) == 1)
    {
        printf("\nThe given number is a palindrome.");
    }
    else
    {
        printf("\nThe given number is not a palindrome number.");
    }
    return 0;
}

int Palindrome(int num)
{
    if(num == reverse(num))
    {
        return 1;
    }
    return 0;
}

int reverse(int num)
{
    int rem;
    static int sum=0;
    if(num!=0)
	{
        rem=num%10;
        sum=sum*10+rem;
        reverse(num/10);
    }
    else
    {
    	return sum;	
	}
} 