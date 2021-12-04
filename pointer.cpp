#include<stdio.h>
int main()
{ char a[20]="Abcd",*p;
p="Hello";
while(*p!='\0'){
printf(":%c",*&*p);p++;};
}
