#include<stdio.h>

int f1(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
	{
	f=f*i;
	}	
return f;
}

void f2(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
	{
	f=f*i;
	}	
printf("factorial of %d is: %d\n ",n,f);
}


void main()
{
int n,f;

printf("enter n: ");
scanf("%d",&n);

f=f1(n);
printf("factorial of %d is: %d\n",n,f);

f2(n);
}