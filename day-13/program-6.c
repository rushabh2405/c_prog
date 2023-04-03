#include<stdio.h>

struct ddmmyy{
int date;
int month;
int year;
}s;

void cmp(int c_date,int c_month,int c_year,struct ddmmyy s)
{
if(s.date==c_date && s.month==c_month && s.year==c_year)
{printf("equal\n");}
else{printf("unequal\n");}
}

void main()

{
int date,c_date,c_month,c_year;
struct ddmmyy s;

printf("enter date: ");
scanf("%d %d %d",&s.date,&s.month,&s.year);

printf("enter cmp date: ");
scanf("%d %d %d",&c_date,&c_month,&c_year);

cmp(c_date,c_month,c_year,s);
}