#include<stdio.h>
#include<conio.h>
void main()
{
 unsigned int a[5],i,n,j;
 clrscr();
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 n=5;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if((a[i]+a[j])==0)
   {
    printf("%d %d",a[i],a[j]);
    printf("\n");
    break;
   }
  }
 }
 getch();
}
