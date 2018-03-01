#include <stdio.h>
int main(void)
{
	char a[50];
	int c=0,i;
	scanf("%s",&a);
            for(i=0;a[i]!='\0';i++)
	{
	if((a[i]>='0')&&(a[i]<='9'))
            c++;
	}
	if(c>=1)
	printf("The given string is numeric");
	else
	printf("Not numeric");
	return 0;
}
