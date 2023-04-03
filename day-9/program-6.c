#include<stdio.h>

int isprime(int num)
{
int i,count=1;

for (i=2;i<num;i++)
{
	if(num%i==0)
		{count=0;
		break;}
}

if(count==1){return 1;}	
}

void main()
{
int i;

for(i=1;i<=10;i++)
	{
	if (isprime(i)==1)
	{printf("%d is a prime number\n",i);}
	}
}