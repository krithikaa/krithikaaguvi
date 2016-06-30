#include <stdio.h>

int main(void) {
	char a[20];
	scanf("%s",&a);
	int i,count=0;
	for(i=0;a[i]!=NULL;i++)
	{
		count++;
	}
	
	for(i=count-1;i>=0;i--)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			
		}
		else
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}
