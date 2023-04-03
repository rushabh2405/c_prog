#include<stdio.h>
void main()
{
int no_pharse,total_unit,total_unit_bill,pharse_charge,final_bill_amt;
char type_customer;

printf("enter type of customer (for domestic enter d or for commercial enter c): ");
scanf("%c",&type_customer);

printf("enter no of pharse (enter 1 for single pharse or enter 3 for three pharse: ");
scanf("%d",&no_pharse);

printf("enter total unit consumed: ");
scanf("%d",&total_unit);

if(type_customer==100)
{
	if(total_unit>0 && total_unit<51)
	{
	total_unit_bill=total_unit*1.45;
	}
	if(total_unit>50 && total_unit<101)
	{
	total_unit_bill=50*1.45+(total_unit-50)*2.85;
	}
	if(total_unit>100 && total_unit<201)
	{
	total_unit_bill=50*1.45+50*2.85+(total_unit-100)*3.95;
	}	
	if(total_unit>200)	
	{
	total_unit_bill=50*1.45+50*2.85+100*3.95+(total_unit-200)*4.50;
	}

	if(no_pharse==1)
		{
		pharse_charge=0.06*total_unit;
		if(pharse_charge<20)
		{pharse_charge=20;}
		}
	if (no_pharse==3)
		{
		pharse_charge=0.06*total_unit;
		if(pharse_charge<50)
		{pharse_charge=50;}
		}

final_bill_amt=total_unit_bill+pharse_charge+10;
printf("final bill amt is: %d\n",final_bill_amt);
}

else if(type_customer==99)
{
	if(total_unit>0 && total_unit<101)
	{
	total_unit_bill=total_unit*3.95;
	}
	if(total_unit>100)	
	{
	total_unit_bill=50*3.95+(total_unit-100)*7;
	}

	if(no_pharse==1)
		{
		pharse_charge=0.06*total_unit;
		if(pharse_charge<50)
		{pharse_charge=50;}
		}
	if (no_pharse==3)
		{
		pharse_charge=0.06*total_unit;
		if(pharse_charge<100)
		{pharse_charge=100;}
		}

final_bill_amt=total_unit_bill+pharse_charge+20;
printf("final bill amt is: %d\n",final_bill_amt);
}


else
{
printf("enter a valid customer type");
}

}
