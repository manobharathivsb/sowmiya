#include <stdio.h>

int main(void) 
{
	int n,count=0,sum;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		sum=sum+n;
	}
	printf("%d",sum);
	return 0;
}
