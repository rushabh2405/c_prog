#include<stdio.h>
void main()
{
int food_type,n=1,cost=0,quantity,nif_type,sif_type,gf_type,pf_type;

printf("enter(1) if you want anything or enter(2) if don't:");
scanf("%d",&n);
		
while(n==1)
{
printf("\n1:for north indian food \n2:for south indian food \n3:for gujarati food \n4:for punjabi food \nenter:  ");
scanf("%d",&food_type);

if(food_type==1)
{
	printf("\n\n1:for chole bhature :100RS\n2:for dilli ki chaat :100RS\n2:for \n3:for carrot halwa :100RS\n enter: ");
	scanf("%d",&nif_type);

	printf("enter quantity: ");
	scanf("%d",&quantity);

	switch(nif_type)
	{	
	case 1:
		cost=cost+100*quantity;
		break;	
	case 2:
		cost=cost+100*quantity;
		break;
	case 3:
		cost=cost+100*quantity;
		break;
	}
}

else if(food_type==2)
{
	printf("\n\n1:for tawa onion dosa :100RS\n2:for idli :100RS\n2:for \n3:for medu vada :100RS\nenter: ");
	scanf("%d",&sif_type);
	
	printf("enter quantity: ");
	scanf("%d",&quantity);

	switch(sif_type)

	{	
	case 1:
		cost=cost+100*quantity;
		break;	
	case 2:
		cost=cost+100*quantity;
		break;
	case 3:
		cost=cost+100*quantity;
		break;
	}
}

else if(food_type==3)
{
	printf("\n\n1:for roti and sabji :100RS\n2:for dal-rice :100RS\n2:for \n3:for bhajiya :100RS\nenter: ");
	scanf("%d",&gf_type);
	
	printf("enter quantity: ");
	scanf("%d",&quantity);

	switch(gf_type)
	
	{	
	case 1:
		cost=cost+100*quantity;
		break;	
	case 2:
		cost=cost+100*quantity;
		break;
	case 3:
		cost=cost+100*quantity;
		break;
	}
}

else if(food_type==4)
{
	printf("\n\n1:for panner chilli :100RS\n2:for paneer butter :100RS\n2:for \n3:for naan :100RS\nenter: ");
	scanf("%d",&pf_type);
	
	printf("enter quantity: ");
	scanf("%d",&quantity);
	
	switch(pf_type)
	
	{	
	case 1:
		cost=cost+100*quantity;
		break;	
	case 2:
		cost=cost+100*quantity;
		break;
	case 3:
		cost=cost+100*quantity;
		break;
	}
}

else
	{printf("enter a valid input");}

printf("enter(1) if you want anything or enter(2) if don't: ");
scanf("%d",&n);
}
printf("total cost is:%d\n",cost);
}

