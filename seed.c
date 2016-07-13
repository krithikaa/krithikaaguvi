#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	int a,n,i,k;
	scanf("%d",&a);
	n=a;
	for(i=0;a!=0;i++)
	{
		k=a%10;
		n=n*k;
		a=a/10;
	}
	printf("%d",n);
	return 0;
}
