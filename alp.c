#include <stdio.h>

int main(void) {
	char ch;
	scanf("%s",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		printf("alphabet");
	}
	else
	{
		printf("not an alphabet");
	}

	return 0;
}
