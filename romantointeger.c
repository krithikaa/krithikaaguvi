#include <stdio.h>

int main(void) {
	char roman[10];
	int count=0,i,value=0;
	for(i=0;i<5;i++)
	scanf("%c",&roman[i]);
	for(i=0;roman[i]!=NULL;i++)
	{
		if(roman[i]=='V')
		value=value+5;
		else if(roman[i]=='I')
		value=value+1;
		else if(roman[i]=='X')
	    value=value+10;
	}
	printf("%d",value);
	return 0;
}
