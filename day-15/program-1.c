#include<stdio.h>

int top=-1;
int size=20;

int pop(int a[size])
{
if(top==-1)
	{
	printf("stack is empty\n");
	return;	
	}
top--;
printf("%d is removed from stack\n",a[top+1]);

return a[top+1];
}

void push(int a[size],int data)
{
if(top==size-1)
	{
	printf("full\n");
	return;
	}

top=top+1;
a[top]=data;
printf("%d is added in stack\n",a[top]);
return a[top+1];
}


void main()
{
int a[size];

push(a,10);
push(a,20);
push(a,30);
push(a,40);
pop(a);
pop(a);
}