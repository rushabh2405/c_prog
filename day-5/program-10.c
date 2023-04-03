#include<stdio.h>
void main()
{
int no_holi,i,date_hoilday,final_holiday;

printf("enter no of holidays: ");
scanf("%d",&no_holi);

final_holiday=8+no_holi;

for(i=1;i<=no_holi;i++)
	{
	printf("enter date of holiday: ");
	scanf("%d",&date_hoilday);

	switch(date_hoilday)
	{
	case 6:	
	case 7:
	case 13:
	case 14:
	case 20:
	case 21:
	case 27:
	case 28:
		final_holiday=final_holiday-1;
		break;
	}	
	}
printf("final number of holidays are: %d\n",final_holiday);
}