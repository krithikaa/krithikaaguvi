#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,count;
 int a[9];
 clrscr();
 n=9;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  count=1;
  for(j=i+1;j<n;j++)
  {
   if(a[i]==a[j])
   {
    count++;
   }
  }
  if(count==1)
  {
   printf("%d",a[i]);
  }
 }
 getch();
}
