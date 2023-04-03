#include<stdio.h>
void main()
{
int num,temp,rem,rev=0,num1,rem1,rev1=0,count1=1;

printf("enter any number: ");
scanf("%d",&num);
temp=num;

while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}

if(rev==temp)
{printf("%d is a palindrone number\n",temp);}

else
{
num1=temp;
num1=num1/10;

while(num1>1)
	{
	rem1=num1%10;
	rev1=rev1*10+rem1;
	num1=num1/10;
	count1=count1*10;
	}

num1=temp;
num1=num1*count1+rev1;
printf("%d\n",num1);
}
}