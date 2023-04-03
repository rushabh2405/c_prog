#include<stdio.h>
void main()
{
int y_o_s;
char depart,quali,temp;

printf("enter department (for IT enter i,for ACCOUNT enter a,for HR enter h):");
scanf("%c",&depart);

scanf("%c",&temp);

printf("enter qualification(enter for p:post-graduate,enter for g:graduate):");
scanf("%c",&quali);

printf("enter year of service: ");
scanf("%d",&y_o_s);

if(depart==105)
{
	if(quali==112) //post graduate
	{
		if(y_o_s>=10)
		{printf("salary:150000\n");}
		else if (y_o_s<10)
		{printf("salary:100000\n");}
	}
	if(quali==103)	//graduate
	{
		if(y_o_s>=10)
		{printf("salary:100000\n");}
		else if (y_o_s<10)
		{printf("salary:70000\n");}
	}
}
if(depart==97)
{
	if(quali==112) //post graduate
	{
		if(y_o_s>=10)
		{printf("salary:120000\n");}
		else if (y_o_s<10)
		{printf("salary:100000\n");}
	}
	if(quali==103)	//graduate
	{
		if(y_o_s>=10)
		{printf("salary:90000\n");}
		else if (y_o_s<10)
		{printf("salary:60000\n");}
	}
}
if(depart==104)
{
	if(quali==112) //post graduate
	{
		if(y_o_s>=10)
		{printf("salary:100000\n");}
		else if (y_o_s<10)
		{printf("salary:90000\n");}
	}
	if(quali==103)	//graduate
	{
		if(y_o_s>=10)
		{printf("salary:80000\n");}
		else if (y_o_s<10)
		{printf("salary:50000\n");}
	}

}
}