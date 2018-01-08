#include <stdio.h>

int main(void) {
	char ch;
	scanf("%s",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}

	return 0;
}
