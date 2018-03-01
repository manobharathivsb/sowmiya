#include<stdio.h>
int main(void)
{
	int n[5],i,a,min;
	scanf("%d",&a);
	for(i=0;i<5;i++)
	scanf("%d",&n[i]);
	min=n[0];
	for(i=0;i<a;i++)
	if(n[i]<min)
                  min=n[i];
	printf("%d is the smallest number",min);
}
