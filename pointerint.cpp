#include<stdio.h>
int main()
{ int a=5,*p;
p=&a;
while(*p='\0')
printf(":%d",*&*p);
}
