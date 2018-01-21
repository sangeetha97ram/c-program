#include <stdio.h>

int main(void) {
	int i,n,flag=0;
	scanf("%d",&n);
	for(i=1;i<=1000;i++)
	{
		if(n%i==0)
		{
		flag++;
		}
	}
	if(flag==2)
	{
		printf("prime");
		
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
