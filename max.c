#include <stdio.h>

int main(void)
{
	int a[50],i,t,n,j;
	scanf("%d",&n);
	for(i=0;1<=3;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=1;i<n;i++)
	for(j=0;j<=n;j++)
	if(a[i]>a[j])
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
		printf("%d",a[0]);

	return 0;
}
