#include<stdio.h>
int main()
{
	int a=-1,b=-1,v[8],i;
	for(i=0;i<5;i++)
	scanf("%d",&v[++a]);
	a=-1;	
	printf("Numberposition  Element\n");
	for(i=0;i<5;i++)
{
	printf("%d\t\t%d\n",a,v[++a]);
}
a=-1;
printf("Numberposition  Element\n");
for(i=0;i<5;i++)
printf("%d\t\t%d\n",a,v[a++]);
}
