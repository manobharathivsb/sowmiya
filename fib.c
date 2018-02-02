#include <stdio.h>

int main(void)
{
	int a=0,b=1,i,n,c;
	printf("%d%d",a,b);
	for(i=2;i<n;i++)
	{
	a=b;
	b=a;
	c=a+b;
	}
printf("%d",c);
	return 0;
}
