#include<stdio.h>

int size;
int top = -1;


void pop(char *a)
{
if (top==-1)
{
printf("Stack is empty\n");
}
printf("%c\n",a[top]);
top = top-1;
}

void push(char *a,char data)
{
if(top==size-1)
{
printf("Stack is full\n");
}
top = top+1;
a[top] = data;
printf("%c is pushed in stack\n",a[top]);
}

void main()
{
int i;
printf("Enter size of string: ");
scanf("%d",&size);
char a[size],temp[size];
printf("Enter string: ");
scanf("%s",a);

for(i=0;i<size;i++)
	{
	push(temp,a[i]);
	}

for(i=0;i<size;i++)
{pop(temp);}
}