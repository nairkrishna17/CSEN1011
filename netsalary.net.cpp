#include <stdio.h>
int main()
{
  int basic ,hra,others,ta,pf,it,net;
  printf("Enter the basics salary--\n");
  scanf("%d",&basic);
  printf("Enter the transport allowance--\n");
  scanf("%d",&ta);
  printf("Enter the hra--\n");
  scanf("%d",&hra);
  printf("Enter the others--\n");
  scanf("%d",&others);
  printf("Enter the pf--\n");
  scanf("%d",&pf);
  printf("Enter the it--\n");
  scanf("%d",&it);
  net=((basic+hra+others+ta)-(pf+it));
  printf("net salary--\n",net); 

}
