#include<stdio.h>

int size = 6;
int top = -1;

int peep(int a[])
{
if(top>-1 && top<size)
return a[top];
}

int pop(int a[])
{
if (top==-1)
{
printf("Stack is empty\n");
return;
}
top = top-1;
return a[top+1];
}

void push(char *a,char data)
{
if(top==size-1)
{
printf("Stack is full\n");
return;
}
top = top+1;a[top] = data;
printf("%d is pushed in stack\n",a[top]);
}

void main()
{
int i;
char stack[20],ch[]="[{}()}]";

for(i=0;i<strlen(ch);i++)
{
if(ch[i]=='{' || ch[i]=='[' || ch[i]=='(')
	{
	push(stack,ch[i]);
	}
else	
	{
	if(ch[i]=='}'&& stack[top]=='{'|| ch[i]==']' && stack[top]=='[' || ch[i]==')' && stack[top]=='(')
	{pop(stack);}
	else
	{
	printf("%c",stack[top]);
	printf("unbalanced \n");}
	}
if(top==-1)
{printf("balanced");}
}

}