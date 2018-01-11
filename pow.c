#include <stdio.h>

int main(void) {
	int a,b,i=1,k=1;
	scanf("%d,%d",&a,&b);
	while(i<=b)
	{
		k=k*a;
		i++;
	}
	printf("%d",k);
	return 0;
}
