#include <stdio.h>
#include<string.h>

int main(void) {
	char days[20];
	scanf("%s",&days);
	if(strcmp(days,"sunday")==0||strcmp(days,"satruday")==0)
	{
	    printf("false");
	}
	else
	{
	    printf("true");
	}
 
	return 0;
}
