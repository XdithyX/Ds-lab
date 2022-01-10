#include <stdio.h>
#include<stdlib.h>
int size=100;
int stack[100];
int top=-1;

void push()
{
int element;
  if(top== size-1)
  {printf("stack full\n");
  return;
  }
  else
  {
  printf("Enter the element to be pushed\n");
  scanf("%d",&element); 

  stack[++top]=element;
  printf("element pushed\n");
  
  }
  }
  
 void pull( )
 {
  if (top==-1)
 { printf("stack is empty\n");
  return;
  }
  else
  top--;
  printf("popped\n");
  }
  
 void peek()
 {
 printf("last element is %d\n", stack[top]);
 }
 
   void main()
  {
    int i;
   
   
   while(1)
  {
  printf("Enter the stack operation to perform\n 1.push 2.pull 3. peek 4.exit\n");
   scanf("%d",&i);
   switch(i)
   {
    case 1: push();
            break;
    case 2: pull();
            break;
    case 3: peek();
            break;
    case 4: exit(0);        
   }
   }
   }
