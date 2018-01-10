#include <stdio.h>

int main(void) {
	int i,n,k,a[5],b=0;
	scanf("%d,%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("\n%d",&a[i]);
	}
	for(i=1;i<=k;i++)
	{
		b=b+a[i];
	}
	printf("%d",b);
	return 0;
}
