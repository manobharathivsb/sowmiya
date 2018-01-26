#include <stdio.h>
int main(void)
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
	{
		if((i==0&&j==0)||(i==1&&j==1)||(i==2&&j==2)||(i==3&&j==3)||(i==4&&j==4))
		{
			printf("\t");
		}
	else
	{
		printf("*\n");
	}
	}
	}
	return 0;
}
