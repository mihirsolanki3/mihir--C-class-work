#include<stdio.h>
#include<math.h>
#define PI 3.14

float area(float b,float h)
{
	return (b * h)/2;
}

float area1(float l,float b)
{
	return (l * b);
}

float area2(float r)
{
	return (PI * r * r);
}

int main()
{ 
	int choice;
	
	printf("\n---------Module : 3 / Question : 4----------\n\n");
	printf("\n-----------Choice for Find out the Area.------------\n");
	
	printf("\npress 1. Find out the Area of Triangle.\npress 2. Find out the Area of Rectangle.\npress 1. Find out the Area of Circle.");	

    printf("\n\nEnter your choice : ");
	scanf("%d",&choice);	 
	
	switch(choice)
	{
	
	case 1 :
	{
	float b, h, a;	
	printf("\nFind out the Area of Triangle.");
	printf("\n\nEnter base of triangle : ");
	scanf("%f",&b);
	printf("Enter height of triangle : ");
	scanf("%f",&h);
    a = area(b,h);
	printf("\nThe Area of Triangle : %0.2f",a);
	return 0;
	break;
    }
    
    case 2 :
    {
    float l, b, a;
	printf("\nFind out the Area of Rectangle.");	
    printf("\n\nEnter length of rectangle : ");
	scanf("%f",&l);
	printf("Enter breadth of rectangle : ");
	scanf("%f",&b);
    a = area1(l,b);
	printf("\nThe Area of Rectangle : %0.2f",a);
	return 0;
	break;	
	}	
	
	case 3 :
	{
	float pi, r, a;
	printf("\nFind out the Area of Circle.");	
    printf("\n\nEnter radius of circle : ");
	scanf("%f",&r);
    a = area2(r);
	printf("\nThe Area of Circle : %0.2f",a);
	return 0;
	break;	
	}
    }
}



// rec : l*b
// cir : pi*r*r