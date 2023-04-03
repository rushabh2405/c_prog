#include<stdio.h>
void main()
{
int days,mrp,fine=0;

printf("enter number of days memeber is late to return the book: ");
scanf("%d",&days);

printf("enter mrp of the book:");
scanf("%d",&mrp);

if(days<=5)
{fine=5*days;}
if(days>5 && days<=10)
{fine=25+10*(days-5);}
if(days>10 && days<=30)
{fine=25+50+20*(days-10);}
if(days>30)
	{
	fine=25+50+20*(days-10);
	if(fine<=mrp)
	{fine=mrp;}
	else if(fine>mrp)
	{fine=fine;}
	}
printf("total fine is :%d\n",fine);
}
