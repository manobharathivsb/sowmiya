#include <stdio.h>

int main(void)
{
	int x,y,t=0;
	printf("enter the number\n");
	scanf("%d\t%d",&x,&y);
{
	t=x;
	x=y;
	y=t;
printf("%d\t%d",x,y);
}
	return 0;
}
