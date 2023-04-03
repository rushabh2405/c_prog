#include<stdio.h>
void main()
{
int a,b;
printf("enter two number: ");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("interchange value is: %d %d\n",a,b);
}


