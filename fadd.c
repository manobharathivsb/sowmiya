#include <stdio.h>

int add();
int main()
{
	printf("add");
	add();
	return 0;
}
add ()
{
	int a=10,b=20,c;
	c=a+b;
	printf("the value is \n:%d",c);
}
