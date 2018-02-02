#include <stdio.h>

int main(void)
{
	int a,b,t=0;
	printf("enter the number\n");
	scanf("%d\t%d",&a,&b);
{
	t=a;
	a=b;
	b=t;
printf("%d\t%d",a,b);
}
	return 0;
}
