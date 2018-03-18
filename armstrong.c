#include <stdio.h>
int main(void) 
{
	int n,s=0,a,b,r;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		a=r*r*r;
		s=s+a;
		n=n/10;
	}
	if(n==b)
	{
		printf("it is a armstrong number");
	}
	else 
	{
		printf("it is not a armstrong number");
	}
	return 0;
}
