#include<stdio.h>

void sum1(int a,int b)
{
int sum1=a+b;
printf("sum of a and b is: %d\n",sum1);
}

void sum2(int a,int b)
{
int sum2=a+b;
printf("sum of a and b is: %d\n",sum2);
}


int sum3(int a,int b)
{
int sum3=a+b;
return sum3;
}


int sum4(int a,int b)
{
int sum4=a+b;
return sum4;
}

int sq_a(int a)
{
int sq=a*a;
return sq;
}


void main()
{
int a,b,ans3,ans4,sq;

printf("enter value of a and b: ");
scanf("%d %d",&a,&b);

sum1(10,20);
sum2(a,b);
ans3=sum3(10,20);
ans4=sum4(a,b);
sq=sq_a(a);

printf("sum of a and b is: %d\n",ans3);
printf("sum of a and b is: %d\n",ans4);
printf("square of a is: %d\n",sq);
}