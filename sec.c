#include<stdio.h>
int main()
{
int min,hour,n;
scanf("%d",&min);
hour=min/60;
n=min%60;
printf("%d %d",hour,n);
return 0;
}
