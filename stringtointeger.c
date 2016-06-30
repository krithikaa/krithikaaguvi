#include <stdio.h>

int main(void) {
	char a[10];
	int value;
	scanf("%s",&a);
	for(int i=0;a[i]!=NULL;i++)
	{
		printf("%d",a[i]-96);
	}
	return 0;
}
