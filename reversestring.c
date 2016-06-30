#include <stdio.h>

int main(void) {
	// variable declaration
	int a[10],count=0,n,i;
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		a[i]=n%10;
		n=n/10;
		count++;
	}
	for(i=0;i<=count-1;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
