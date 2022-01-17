#include<stdio.h>
#include<string.h>
#define size 30
char stack[size];
int top=-1;

void push(char ch)
{
 if(top==size-1)
 {
 printf("stack overflow");
 return;
 }
 stack[++top]=ch;
}

 char pop()
{
 if(top!=-1)
 return(stack[top]);
 
 }
 
 void main()
 {
 int i,flag=1;
 char str[20],temp[20];
 printf("Enter the string\n");
 scanf("%s",str);
 int n= strlen(str);
 for(i=0;i<n;i++)
 push(str[i]);
 
 for(i=0;i<n;i++)
 {
 temp[i]=pop();
 
 if(temp[i]!=str[i])
 {
 flag=0;
 break;
 }
 
 top--;
 }

 
 if(flag==0)
 printf("Not Palindrome\n");
 else 
 printf("palindrome\n");
 }
 
 
 