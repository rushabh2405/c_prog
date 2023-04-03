#include<stdio.h>
void main()
{
int num,temp,rem,rev=0;

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
else{printf("%d is not a palindrone number\n",temp);}
}