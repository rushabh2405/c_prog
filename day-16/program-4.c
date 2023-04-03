#include<stdio.h>

int top=-1,size=20;

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

void add_data(int a[],int data)
{
if(top==-1){
push(a,data);
return;
}
if(a[top]<data)
	{
	push(a,data);
	return;
	}
int x=pop(a);
add_data(a,data);
push(a,x);
}

void main()
{
int i,stack[size],a[size],s;

printf("Enter size of stack: ");
scanf("%d",&s);

for(i=0;i<s;i++)
	{
	printf("enter stack[%d]:",i);	
	scanf("%d",&stack[i]);	
	add_data(a,stack[i]);
	}
printf("\n");

}
