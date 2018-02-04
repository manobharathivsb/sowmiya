#include <stdio.h>
int add(int,int);
int main() 
{
	int a=70,b=100,c;
	printf("ADD");
	c=add(a,b);
	printf("the value is \n:%d",c);
	return 0;
}
int add(int p,int q)
{
	int d;
	d=p+q;
	return d;
}

