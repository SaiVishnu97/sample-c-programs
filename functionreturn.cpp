#include<stdio.h>
void main()
{
	float pass(float);
	int x;
char y;
	printf("Enter value of x:";);
	scanf("%d",&x);
	if(x<0)return 0;
	y=pass(x);
	switch(y)
	{case 1:printf("The value returned is %d",y);
	break;
	default:
	printf("The Cube of %d is :%c",x,y);
	}
	return 0;
	}
float	 pass(float a)
	{
		if(a==0)
		return 0;
		else 
		return(a*a*a);
	}
