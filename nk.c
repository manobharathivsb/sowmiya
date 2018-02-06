#include <stdio.h>

int main(void) 
{
	int n,a[5],k,i,sum=0;
	printf("enter the number");
	scanf("%d\t%d",&n,&k);
	for (i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
sum=sum+a[i];
}
printf("%d", sum);
return 0;
}
