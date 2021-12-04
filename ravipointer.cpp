#include<stdio.h>
int main()
{
int x=5;
int *p=&x;int *y;y=p;
printf("\n%d",x);
printf("\n%d",&x);
printf("\n%d",p);
printf("\n%d",*p);
printf("\n%d",&p);
printf("\n%d",y);
printf("\n%d",*y);
printf("\n%d",&y);
}
