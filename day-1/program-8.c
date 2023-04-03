#include<stdio.h>
void main()
{
int num,ld,d1,d2,d3,d4,d5;
printf("enter a five digit number: ");
scanf("%d",&num);

ld=num%10;
d1=ld*10000;
num=num/10;

ld=num%10;
d2=ld*1000;
num=num/10;

ld=num%10;
d3=ld*100;
num=num/10;

ld=num%10;
d4=ld*10;
num=num/10;

ld=num%10;
d5=ld*1;
num=num/10;

printf("reverse number is: %d\n",d1+d2+d3+d4+d5);
}
