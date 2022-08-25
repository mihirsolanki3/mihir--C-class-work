#include<stdio.h>

void main()

{
	float p, t, r, si, ci;
	printf("\n---------Module : 2 / Question : 2----------\n\n");
	printf("Enter principal amount (p) : ");
	scanf("%f",&p);
	printf("Enter time in year (t) : ");
	scanf("%f",&t);
	printf("Enter rate in percent (r) : ");
	scanf("%f",&r);
	
	printf("\nPrincipal (p) : %0.2f rs \nTime (t) : %0.1f year \nPercent (r) : %0.2f %\n",p,t,t);
	/*
	si = Simple Interest
	ci = Compound Interest 
	*/
	 
	si = (p * t * r)/100;
	ci = p*(pow(1 + r/100 , t) - 1);
	
	printf("\nSimple Interest : %0.3f",si);
	printf("\n\nCompound Interest : %0.3f",ci);
	
}