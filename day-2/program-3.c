#include<stdio.h>
void main()
{
int quantity,price;
printf("enter a price per iteam: ");
scanf("%d",&price);

printf("enter quantity: ");
scanf("%d",&quantity);

if(quantity>1000)
{
printf("total bill is:%f\n",0.9*quantity*price);
}  
else
{
printf("total bill is:%d\n",quantity*price);}
}