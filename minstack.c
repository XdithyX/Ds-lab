#include <stdio.h>
#include<stdlib.h>
int size=100;
int stack[100];
int top=-1;
int aux[100];
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
   if(top==-1)
  {
  stack[++top]=element;
  aux[top]=element;
  printf("element pushed\n");
  }
  else
  {
  stack[++top]=element;
   if(element>aux[top-1])
   aux[top]=aux[top-1];
   else
   aux[top]=element;
   }
  
  
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
 printf("minimum element is %d\n", aux[top]);
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
