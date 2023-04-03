#include<stdio.h>
void main()
{
int base_salary;
printf("enter base salary: ");
scanf("%d",&base_salary);
printf("dearness allowance is: %f\n",0.4*base_salary);
printf("house rent allowance is: %f\n",0.2*base_salary);
printf("gross salary is: %f\n",1.6*base_salary);
}
