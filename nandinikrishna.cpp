#include<stdio.h>
int main()
{
	int p,t,r,si,ci;
	p=t=r=100;
	si=p*t*r/100;
	printf("simple intrest: %d\n",si);
	ci=p*(1+r/100)*t;  
	printf("compoundintrest:%d\n",ci);
}
