#include <stdio.h>

int main(void) {
	int n,n1,n2,k,r=0;
	scanf("%d,%d",&n1,&n2);
	for(n=n1;n<n2;++n)
	{
	for(k=2;k<=n/2;k++)
	{
		if(n%k==0)
		{
		r++;

		}
	}
	if(r==0)
	{
		printf("%d",n);
		
	}
	}
	return 0;
}
