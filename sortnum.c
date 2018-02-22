#include<stdio.h>
int main()
{
int a[10],i,j,b,temp;
scanf("%d",&b);
for(i=0;i<b;i++)
scanf("%d",&a[i]);
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("The sorted elements are:\n");
for(i=0;i<b;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
