#include<stdio.h>
void main()
{
int num,rem,sum=0,temp;

printf("enter any number: ");
scanf("%d",&num);
temp=num;

while(num>0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
if(sum==temp)
{printf("%d is a armstrong number\n",temp);}
else
{printf("%d is not a armstrong number\n",temp);}
}