#include<stdio.h>
void main ()
{
int num,s,i,j,k,a[100],sum=0;

printf("enter size of array: ");
scanf("%d",&num);

printf("enter s: ");
scanf("%d",&s);

for(i=0;i<num;i++)
{
	printf("enter a[%d]: ",i);
	scanf("%d",&a[i]);
}
printf("sub-array is: ");
for(i=0;i<num;i++)  
{	
	sum=0;
	for(j=i;j<num;j++)     
	{
		sum=sum+a[j];
		if(sum==s)
		{
		for(k=i;k<=j;k++)
		{printf("%d, ",a[k]);}	
		printf("&");
		}
	
	}
}
printf("\n");
}