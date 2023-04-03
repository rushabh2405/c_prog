#include<stdio.h>

int calc_bill(int code,int q)
{
int bill=0,price;

if(code==101)
{price=150;}
if(code==102)
{price=100;}

bill=q*price;
return bill;
}

void main()
{
int code,q,total_bill;

printf("enter code (101 or 102): ");
scanf("%d",&code);

printf("quantity: ");
scanf("%d",&q);

total_bill=calc_bill(code,q);
printf("total bill is: %d\n",total_bill);
}