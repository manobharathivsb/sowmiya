#include <stdio.h>
int main(void) {
            char a[100],i,b=0;
	scanf("%s",a);
           for(i=0;a[i]!='\0';i++)
           b++;
           a[b/2]='*';
            for(i=0;a[i]!='\0';i++)
           printf("%c",a[i]);
           return 0;
}


