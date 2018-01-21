#include <stdio.h>
#include<math.h>

int main(void) {
	int l,h,i,a,b,rem,n=0,result=0;
	scanf("%d,%d",&l,&h);
	for(i=l+1;i<h;++i)
	{
		a=i;
		b=i;
		while(a!=0)
		{
			a/=10;
			++n;
			
		}
		{
			rem=b%10;
		while(b!=0)
			result+=pow(rem,n);
			b/=10;
		}
		if(result==i)
		{
			printf("%d",i);
		}
	}
	return 0;
}
