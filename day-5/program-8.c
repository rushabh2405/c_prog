#include<stdio.h>
void main()
{
int num,i,j,count=1,total_prime_number=0;

printf("enter any number: ");
scanf("%d",&num);

printf("1 is a prime number\n");
printf("2 is a prime number\n");

for (i=3;i<=num;i++)
{
	for (j=2;j<i;j++)
	{
		if(i%j==0)
		{
		count=0;
		break;
		}
		else
		{count=1;}
	}	
	if(count==1)
	{printf("%d is a prime number\n",i);
	total_prime_number=total_prime_number+1;}
	
}
printf("total no of prime number is:%d",total_prime_number+2);
}
