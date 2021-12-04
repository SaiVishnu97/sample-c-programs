#include<stdio.h>
int main()
{
	int a[10],b[10],i,j,x,c[10];
	for(i=0;i<4;i++)
	{
		printf("\nEnter a[%d] bit:",i);
		scanf("%d",&a[i]);
		if(a[i]<0||a[i]>1)
		{printf("\n You Fucker Enter only 1 or 0");
			i--;
		
		}
	}
		for(i=0;i<4;i++)
	{
		printf("\nyour a[%d] bit is%d:",i,a[i]);
	}
}
