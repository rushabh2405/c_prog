#include<stdio.h>
void main()
{
int num,digit,sum=0,temp,count=0;

printf("enter a number: ");
scanf("%d",&num);
temp=num;

while(num!=1)
{	
	sum=0;
	while(num>0)
	{
	digit=num%10;
	sum=sum+(digit*digit);
	num=num/10;
	}
num=sum;
count=count+1;

if(count==100 && sum>1)
	{
	printf("number is not a happy number: %d\n",temp);
	break;
	}
}
if(num==1) {printf("number is a happy number: %d\n",temp);}
}
