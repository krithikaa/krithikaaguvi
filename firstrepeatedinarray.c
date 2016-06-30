#include <stdio.h>

int main(void) {
	
	//variable declaration
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	
	//enter the elements of an array
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//finding the first element which is repeated
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			  n=a[i];
			  break;
			}
		}
	}
	
	printf("%d",n);
	return 0;
}
