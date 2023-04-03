#include<stdio.h>
void main()
{
int i,j,k,n,temp;

printf("enter no: ");
scanf("%d",&n);
temp=n;

for(i=1;i<=n;i++)
{
	for(j=1;j<=temp-1;j++)
	{
	printf(" ");	
	}
	for(k=1;k<=i;k++)
	{
	printf("*");
	}
temp=temp-1;
printf("\n");	
}
}
