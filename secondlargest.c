#include <stdio.h>

int main(void)
{
	int a,b,c;
	scanf("%d\t%d\t%d",&a,&b,&c);
	if((a>b&&a<c)||(a<b&&a>b))
	{
		printf("%d is second largest",a);
	}
else if((b>a&&b<c)||(b<a&&b>c))
{
	printf("%d is a second largest",b);
}
else if((c>a&&c<b)||(c<a&&c>b))
{
	printf("%d is a second largest",c);
}
else
{ 
	printf("all numbers are equal");
}
	return 0;
}
