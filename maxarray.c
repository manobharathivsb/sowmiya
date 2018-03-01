#include<stdio.h>
int main(void)
{
	int n[5],i,a,max;
	scanf("%d",&a);
	for(i=0;i<5;i++)
	scanf("%d",&n[i]);
	max=n[0];
	for(i=0;i<a;i++)
	if(n[i]>max)
                  max=n[i];
	printf("%d is the largest number",max);
}

