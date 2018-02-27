#include <stdio.h>
int main(void) 
{
	char x[50];
	scanf("%s",x);
	int count=0,i;
{
	for(i=0;i<50;i++)
	{
		if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
		{
			count++;
		}
	}
	if(count>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
return 0;
}



