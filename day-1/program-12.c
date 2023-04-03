#include<stdio.h>
void main()
{
int sell,profit;
printf("enter selling price and profit of 15 iteam's: ");
scanf("%d %d",&sell,&profit);
printf("cost price per iteam is: %d\n",(sell/15)-(profit/15));
}
