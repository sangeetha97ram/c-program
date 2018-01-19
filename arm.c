#include <stdio.h>

int main(void) {
	int n,rem,t,r=0;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		rem=n%10;
		r=r+rem*rem*rem;
		n=n/10;
	}

	if(t==r)
	{
		printf("yes");
	}
	else
	{
		printf("no");	
		
	}
	return 0;
}
