#include<stdio.h>

int iseven(int n)
{
if(n%2==0){return 1;}
else{return 0;}
}

void main()
{
int i;

for(i=1;i<=10;i++)
	{
	if (iseven(i)==1)
	{printf("%d is a even no\n",i);}
	}
}