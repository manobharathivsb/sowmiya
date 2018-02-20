#include <stdio.h>
int main(void)
{
	int b,s=0,i;
	scanf("%d",&b);
	int d[b];
	for(i=0;i<b;i++)
	{
	scanf("%d",&d[i]);
	}
	for(i=0;i<b;i++)
{
	s=s+d[i];
}
	 int c=s/b;
	printf("%d",c);

	return 0;
}
