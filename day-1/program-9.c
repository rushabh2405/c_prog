#include<stdio.h>
void main()
{
int number,i=0,ld,sum=0;
printf("enter a five digit number: ");
scanf("%d",&number);
for (i=0;i<5;i++)
{
ld=number%10;
number=number/10;
if(i==0||i==4)
{sum=sum+ld;}
}
printf("sum of first and last digit is: %d\n",sum);
}
