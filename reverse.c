#include<stdio.h>
int main()
{
	int b,rev;
	int a=0;
	printf("enter the integer:");
	scanf("%d",&b);
	while(b!=0) 
	{
		rev=b%10;
		a=(a*10)+rev;
		b/=10;
	}
	 printf ("reversed number:%d",a); 
	 return 0;
}
