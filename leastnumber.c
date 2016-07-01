#include<stdio.h>

void main()
{
 int n,a[50],temp,i,j,k,count=0;
 scanf("%d",&n);
 for(i=0;n!=0;i++)
 {
  a[i]=n%10;
  n=n/10;
  count++;
 }
 for(i=0;i<count;i++)
 {
  for(j=i+1;j<count;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
   }
  }
 }
 scanf("%d",&k);
 for(i=0;i<count-k;i++)
 {
  printf("%d",a[i]);
 }
}
