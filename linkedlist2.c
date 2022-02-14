#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
}*first=NULL;
 
void create(int a[],int n)
{
 int i;
 struct node *t,*last;
 first=(struct node *)malloc(sizeof(struct node));
 first->data=a[0];
 first->next=NULL;
 last=first;
 
 for(i=1;i<n;i++)
 {
 t= (struct node *)malloc(sizeof(struct node));
 t->data=a[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void addele()
{
 printf("Enter the node data after which new node is to be inserted and the node data to be inserted\n");
 int x,y;
 scanf("%d %d",&x,&y);

 struct node *newnode;
 newnode=(struct node *)malloc(sizeof(struct node));

 struct node *t=first;
 do
 {
  if(t->data==x)
  {
   newnode->data=y;
   newnode->next=t->next;
   t->next=newnode;
  }
  else
  t=t->next;
  }while(t->next!=NULL);
 } 
  
 
 
 
 
 
 
void display(struct node *p)
{
while(p!=NULL)
{
printf("%d\n",p->data);
p=p->next;
}
}

void main()
{
int n,a[20],i,c;


printf("Enter the number of elements");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
create(a,n);
display(first);
addele();
display(first);
}
