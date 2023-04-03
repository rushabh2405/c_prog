#include<stdio.h>
void main()
{
int num,d1,d2,d3,d4,d5;
printf("enter a five digit number: ");
scanf("%d",&num);

d1=(num%10)+1;
num=num/10;

d2=(num%10)+1;
num=num/10;

d3=(num%10)+1;
num=num/10;

d4=(num%10)+1;
num=num/10;

d5=(num%10)+1;
num=num/10;

printf("output is: %d %d %d %d %d",d5,d4,d3,d2,d1);
}
