#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,flag;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  flag=0;
  for(j=i+1;j<n;j++)
  {
   if(a[i]==a[j])
   {
    flag++;
   }
  }
  if(flag==1)
  {
   printf("%d",a[i]);
  }
 }
 getch();
}
