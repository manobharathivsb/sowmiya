#include <stdio.h>
int main(void) 
{
	int n,s=0,a,b,c;
	scanf("%d",&n);
	while(n>0)
	{
		n=n%10;
		a=n*n*n;
		b=a+s;
		c=n/10;
	}
	if(a==b)
	{
		printf("it is a armstrong number");
	}
	else 
	{
		printf("it is not a armstrong number");
	}
	return 0;
}
