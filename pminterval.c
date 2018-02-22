# include<stdio.h>
int main(void)
{
int i,j,a,c,n,b;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
	c=0;
for(j=1;j<=b;j++)
{
if(i%j==0)
c++;
}
if(c==2)
printf("%d\t",i);
}
return 0;
}
