#include<stdio.h>

int top=-1,size;

int pop(int a[])
{
if (top==-1)
	{
	printf("Stack is empty\n");
	return 0;
	}
printf("%d is poped from stack\n",a[top]);
top = top-1;
return a[top+1];
}

void push(int *a,int data)
{
if(top==size-1)
	{
	printf("Stack is full\n");
	return;
	}
top = top+1;
a[top] = data;
printf("%d is pushed in stack\n",a[top]);
}

void remove_middle_value(int a[])
{
if(top==size/2)
	{
	pop(a);
	return;
	}
int x=pop(a);
remove_middle_value(a);
push(a,x);
}

void main()
{
int i,data,stack[size],a[size];

printf("Enter odd size of stack: ");
scanf("%d",&size);

while(size%2==0)
	{
	printf("try again Enter odd size of stack: ");
	scanf("%d",&size);
	}

for(i=0;i<size;i++)
	{
	printf("enter stack[%d]:",i);	
	scanf("%d",&stack[i]);	
	push(a,stack[i]);
	}
printf("\n");
remove_middle_value(a);
}