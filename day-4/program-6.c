#include<stdio.h>
void main()
{
int n,i;

printf("enter no of n: ");
scanf("%d",&n);

printf("even no: ");
for (i=n;i<=n+19;i++)
{	
	if(i%2==0)
	{printf("%d ",i);}
}

printf("\nodd no: ");
for (i=n;i<=n+19;i++)
{	
	if(i%2==1)
	{printf("%d ",i);}
}
printf("\n");
}