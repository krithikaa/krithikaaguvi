#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	char str[100];
	int i,count=0;
	fgets(str,100,stdin);
	for(int i=0;str[i]!=0;i++)
	{
		if((str[i-1]==' ')||(i==0))
		{
			if(str[i]>='a'&&str[i]<='z')
			{
				str[i]=str[i]-32;
			}
			else
			{
				str[i]=str[i]+32;
			}
		}
		printf("%c",str[i]);
	}
	return 0;
}
