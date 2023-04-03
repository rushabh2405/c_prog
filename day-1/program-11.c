#include<stdio.h>
void main()
{
int amt;
printf("enter any amount in hundreds: ");
scanf("%d",&amt);
printf("you can have %d currency note of 10\n",amt/10);
printf("you can have %d currency note of 50\n",amt/50);
printf("you can have %d currency note of 100\nx",amt/100);
}
