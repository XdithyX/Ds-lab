#include <stdio.h>
#include<stdlib.h>
const int size =100;
int stack[100];
int top1=-1;
int top2= size;


void push1()
{
int element;
  if(top1== top2-1)
  {printf("stack full\n");
  return;
  }
  else
  {
  printf("Enter the element to be pushed\n");
  scanf("%d",&element); 

  stack[++top1]=element;
  printf("element pushed\n");
  
  }
  }
  
  void push2()
  {
  int element;
  if(top2== top1+1)
  {printf("stack full\n");
  return;
  }
  else
  {
  printf("Enter the element to be pushed\n");
  scanf("%d",&element); 

  stack[--top2]=element;
  printf("element pushed\n");
  
  }
  }
  
  
 void pull1( )
 {
  if (top1==-1)
 { 
 printf("stack is empty\n");
  return;
  }
  else
  top1--;
  printf("popped\n");
  }
  
  void pull2( )
 {
  if (top2==size)
 { 
 printf("stack is empty\n");
  return;
  }
  else
  top2++;
  printf("popped\n");
  }
  

   void main()
  {
    int i;
   
   
   while(1)
  {
  printf("Enter the stack operation to perform\n 1st stack\n1.push 2.pull  \n 2nd stack \n 3.push 4.pull \n 5.exit\n");
   scanf("%d",&i);
   switch(i)
   {
    case 1: push1();
            break;
    case 2: pull1();
            break;
    case 3: push2();
            break;
    case 4: pull2();
            break;
    case 5: exit(0);               
   }
   }
   }
