#include<stdio.h>
int main()
{
char a;
scanf("%c",&a);
if((a>='0')&&(a<='9'))
{
printf("numeric");
}
else
{
printf("no");
}
return 0;
}
