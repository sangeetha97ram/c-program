#include <stdio.h>

int main(void) {
int a,rem,rev=0,t;
t=a;
scanf("%d",&a);
while(a!=0)
{
	rem=a%10;
rev=rev*10+rem;
a=a/10;
}
if(t!=rev)
{
printf("yes");
}
else
{
	printf("no");
}


	return 0;
}
