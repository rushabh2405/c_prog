#include<stdio.h>
void main()
{
int n,i,no,p_count=0,n_count=0,z_count=0,odd_count=0,even_count=0;

printf("enter no of n: ");
scanf("%d",&n);

for (i=1;i<=n;i++)
{	
	printf("enter no%d: ",i);
	scanf("%d",&no);
	if(no>0)
	{p_count=p_count+1;}
	if(no<0)
	{n_count=n_count+1;}
	if(no==0)
	{z_count=z_count+1;}
	if(no%2!=0)
	{odd_count=odd_count+1;}
	if(no%2==0)
	{even_count=even_count+1;}	
}
printf("no of positive number are: %d\n",p_count);
printf("no of negative number are: %d\n",n_count);
printf("no of zeros are: %d\n",z_count);
printf("no of odd number are: %d\n",odd_count);
printf("no of even number are: %d\n",even_count);
}