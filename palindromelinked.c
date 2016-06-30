#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct node
{
 struct node *prev;
 char data;
 struct node *next;
}*first=NULL,*last=NULL,*temp,*p,*q;

void create()
{
 char ch;
 do
 {
  int x;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter the char data in terms of values:");
  scanf("%d",&x);
  if(x>96)
  {
   temp->data=x;
  }
  else
  {
   printf("\nRe-enter the data greater than 96");
   scanf("%d",&x);
   temp->data=x;
  }
  if(first==NULL)
  {
   first=last=temp;
  }
  else
  {
   last->next=temp;
   temp->prev=last;
   last=temp;
  }
  printf("\nDo you want to continue?");
  ch=getche();
 }while(ch!='n');
}

void check()
{
 int n=0;
 q=last;
 for(p=first;p!=NULL;p=p->next)
 {
  if(p->data!=q->data)
  {
   n=1;
  }
  q=q->prev;
 }
 if(n==1)
 {
   printf("\nNo it is not palindrome");
 }
 else
 {
  printf("\nYes it is palindrome");
 }
}

void display()
{
 printf("\n");
 for(temp=first;temp!=NULL;temp=temp->next)
 {
  printf("%c",temp->data);
 }
}

void main()
{
 clrscr();
 create();
 check();
 display();
 getch();
}
