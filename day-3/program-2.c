#include<stdio.h>
void main()
{
int n_moni,n_cpu,p_moni,p_cpu,total_p_moni,total_p_cpu,comi_moni=0,comi_cpu=0,total_comission=0;

printf("enter no of computer: ");
scanf("%d",&n_moni);

printf("enter no of cpu: ");
scanf("%d",&n_cpu);

printf("enter price of computer: ");
scanf("%d",&p_moni);

printf("enter price of cpu: ");
scanf("%d",&p_cpu);

total_p_moni=n_moni*p_moni;
total_p_cpu=n_cpu*p_cpu;

if (n_cpu>0)
{
	if(total_p_cpu<10000)
	{comi_cpu=0;}
	if(total_p_cpu>=10000 && total_p_cpu<25000)
	{comi_cpu=0.08*total_p_cpu;}
	if(total_p_cpu>=25000)
	{comi_cpu=2000+(0.10*(total_p_cpu-25000));}
}

if (n_moni>0)
{
	if(total_p_moni<10000)
	{comi_moni=0.05*total_p_moni;}
	if(total_p_moni>=10000)
	{comi_moni=(0.05*10000)+0.08*(total_p_moni-10000);}
}
total_comission=comi_cpu+comi_moni;

printf("comission obtained on cpu is: %d\n",comi_cpu);
printf("comission obtained on monitor is: %d\n",comi_moni);
printf("total comission obtained is: %d\n",total_comission);

}