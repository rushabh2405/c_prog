#include <stdio.h>
void main()
{
int index;
float temp[10]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10};

printf("enter index: ");
scanf("%d",&index);

printf("%f\n",temp[index-1]);
}

