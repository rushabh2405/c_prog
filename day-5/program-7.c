#include<stdio.h>
void main()
{
int num,i,count=1;

printf("enter any number: ");
scanf("%d",&num);

for (i=2;i<num;i++)
{
	if(num%i==0)
		{count=0;
		break;}
}

if(count==1)
	{printf("%d is a prime number\n",num);}
else
	{printf("%d is not a prime number\n",i);}
}