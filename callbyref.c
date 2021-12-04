#include<stdio.h>
int main()
{
	int x,y;
	int change(int*,int*);
	printf("\n Enter the values of X and Y:");
	scanf("%d%d",&x,&y);
	change(&x,&y);
	printf("In Main() X=%d Y=%d",x,y);
	
}
change(int *a ,int *b)
{
int k;
k=*a;
*a=*b;
*b=k;
printf("\n In Change() X=%d Y=%d",*a,*b);
}
