#include<stdio.h>
#include<stdlib.h>

void main()
{
int *intptr;
intptr=(int*)malloc(sizeof(int)*5);
*intptr=x;
printf("pointer value before:%d",*intptr);
free(intptr);

*intptr=101;
printf("pointer value after:%d",*intptr);
}
