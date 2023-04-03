#include<stdio.h>
void main()
{
int n=1,code,quantity,cost=0;

while(n!=0)
{
printf("enter (1) if you want to anything or enter (0) if don't: ");
scanf("%d",&n);
if(n==0){break;}

printf("\nenter 101 for burger cost is 150\nenter 102 for pizza cost is 200\nenter 103 for vadapav cost is 30\nenter 104 for sandwich cost is 100\n");

printf("enter the code: ");
scanf("%d",&code);

printf("enter quantity: ");
scanf("%d",&quantity);

switch(code)
	{
	case 101:
		cost=cost+(quantity*150);
		break;
	case 102:
		cost=cost+(quantity*200);
		break;
	case 103:
		cost=cost+(quantity*30);
		break;
	case 104:
		cost=cost+(quantity*100);
		break;	
	}
}
printf("your total bill amount is: %d\n",cost);
}