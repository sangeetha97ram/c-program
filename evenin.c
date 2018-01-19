#include <stdio.h>

int main(void) {
	int i,l,f;
	scanf("%d,%d",&l,&f);
	for(i=l+1;i<=f;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
	}
	return 0;
}
