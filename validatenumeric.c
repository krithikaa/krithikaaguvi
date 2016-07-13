#include <stdio.h>

int main(void) {
	char str[10];
	int i,n=0;
	scanf("%d",&str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>47&&str[i]<58)
		{
			n=1;
			break;
		}
	}
	if(n==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
