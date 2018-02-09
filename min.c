#include <stdio.h>
int main(void)
{
int minutes, hours;
scanf("%d",&minutes);
{
hours= minutes/60;
minutes=minutes%60;
}
printf("%d hrs\n",hours);
printf("%d min\n",minutes);
return 0;
}
