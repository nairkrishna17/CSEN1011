#include<stdio.h>
int fact(int K)
{
if (K <= 1)
return 1;
return K*fact(K-1);
}

int nPr(int K, int R)
{
return fact(K)*fact(K+1)/fact(K-R);
}

int main()
{
int K, R;
scanf("%d", &K);
scanf("%d", &R);
if (K>10)
{
printf("Invalid");
}
else{
printf("%d", nPr(K, R));
}
return 0;
}
