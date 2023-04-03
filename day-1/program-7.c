#include<stdio.h>
void main()
{
int number,i=0,ld,sum=0;
printf("enter a five digit number: ");
scanf("%d",&number);
for (i=0;i<5;i++)
{
ld=number%10;
sum=sum+ld;
number=number/10;
}
printf("total of five digit is: %d",sum);
}
