#include <stdio.h>
int main()
{
  int m, i,n,sum=0,r,s;
  scanf("%d %d", &m, &n);
  for(i=m; i<=n; i++)
  {
	 while(i>0)
	 {
	 	r=i%10;
	 	s=r*r*r;
	 	sum=sum+(r*r*r);
	 	i=i/10;
	 }
  }	 
     if(i==sum);
     {
 printf("%d",i);
     }
     return 0;
}
