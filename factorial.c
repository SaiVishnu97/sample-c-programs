#include <stdio.h>
int main()
{
	int fact(int),a,m,b;
	printf("Enter a number:");
	scanf("%d",&a);
	m=fact(a),b=1;
	printf("The factorial of %d is %d:",m,b);
}
 int fact(int f)
{
	int z;
	if(f==1)
	return(f);
	else 
	{
		z=f*fact(f-1);
		return(z);
	}
}
