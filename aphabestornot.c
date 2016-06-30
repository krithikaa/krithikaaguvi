#include <stdio.h>

int main(void) {
	char a;
	scanf("%c",&a);
	if(a>='a'&&a<='z')
	{
		printf("alphabets");
	}
	else
	{
		printf("not an alphabet");
	}
	return 0;
}
