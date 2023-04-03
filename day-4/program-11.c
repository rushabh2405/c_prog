#include<stdio.h>
void main()
{
int n=1,cp,sp,quantity,profit=0;

while(n!=0)
{
printf("enter (1) if want to add share's or enter (0) if don't: ");
scanf("%d",&n);

if(n==0){break;}
	{
	printf("enter cost price per share: ");
	scanf("%d",&cp);

	printf("enter selling price per share: ");
	scanf("%d",&sp);

	printf("enter total quantity: ");
	scanf("%d",&quantity);

	profit=profit+(sp-cp)*quantity;
	}
}
printf("total profit is: %d\n",profit);
}