#include <stdio.h>

int main(void) {
	//variable declaration
	int n,m,i,j,flag=0;
	//scanf("%d%d",&n,&m);
	n=5,m=10;
	int a1[n],a2[m];
	
	//array elements
	for(i=0;i<m;i++)
	  scanf("%d",&a2[i]);
	for(i=0;i<n;i++)
	  scanf("%d",&a1[i]);
	  
	  
	  for(i=0;i<m;i++)
	  printf("%d",a[i]);
	  printf("\n");
	  
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a1[i]!=a2[j])
			{
				flag++;
			}
		}
	}
	if(flag==n)
		printf("subset");
	else
		printf("not a subset");
	
	return 0;
}
