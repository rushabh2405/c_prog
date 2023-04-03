#include<stdio.h>
void main()
{
int q_burger,q_pizza,q_sandwitch,total_burger=0,total_pizza=0,total_sandwitch=0;

printf("enter quantity of burger: ");
scanf("%d",&q_burger);

printf("enter quantity of pizza: ");
scanf("%d",&q_pizza);

printf("enter quantity of sandwitch: ");
scanf("%d",&q_sandwitch);

if(q_burger+q_pizza+q_sandwitch==0)
{
printf("buy some thing");
}

if(q_burger>0)
{
	if(q_burger>5)
	{total_burger=0.9*150*q_burger;}
	else
	{total_burger=150*q_burger;}
}
  
if(q_pizza>0)
{
	if(300*q_pizza>1000)
	{total_pizza=0.85*300*q_pizza;}
	else
	{total_pizza=300*q_pizza;}
}

if(q_sandwitch>0)
{
	if(100*q_sandwitch>500)
	{total_sandwitch=0.80*100*q_sandwitch;}
	else
	{total_sandwitch=100*q_sandwitch;}
}

printf("total bill amount is: %6.2f\n",1.12*(total_burger+total_pizza+total_sandwitch));
}
