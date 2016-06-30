#include <stdio.h>

int main(void) {
	char a[10];
	int count=0,i;
	scanf("%s",&a);
	for(i=0;a[i]!=NULL;i++)
	{
		count++;
	}
	for(i=count-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
