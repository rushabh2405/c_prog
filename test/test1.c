#include<stdio.h>
void main()
{
int gross_salary,saving,taxable_income,tax;

printf("enter gross salary: ");
scanf("%d",&gross_salary);

printf("enter total saving: ");
scanf("%d",&saving);

if(saving<=100000)
{taxable_income=gross_salary-saving;}
else if (saving>100000)
{taxable_income=gross_salary-100000;}

if(taxable_income<100000)
{tax=0;}
if(taxable_income>=100000 && taxable_income<200000)
{tax=0.10*(taxable_income-100000);}
if(taxable_income>=200000 && taxable_income<500000)
{tax=0.10*(100000)+0.20*(taxable_income-200000);}
if(taxable_income>500000)
{tax=0.10*(100000)+0.20*(300000)+0.30*(taxable_income-500000);}

printf("tax is :%d\n",tax);
}
