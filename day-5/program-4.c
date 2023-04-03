#include<stdio.h>
void main()
{
int num,fact=1;

printf("enter any number: ");
scanf("%d",&num);

while(num>1)
{
fact=fact*num;
num=num-1;
}
printf("factorial is:%d\n",fact);
}