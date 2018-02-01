#include <stdio.h>
int main(void)
{
	int a,b,swap;
	scanf("%d%d",&a,&b);
	printf("%d%d",a,b);
	a=a^b;
	b=b^a;
	a=a^b;
	printf("%d%d",a,b);
return 0;
}

