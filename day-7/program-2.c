#include<stdio.h>
void main ()
{
int num,i,a[100],sum=0,total;

printf("enter size of array: ");
scanf("%d",&num);

total=num*(num+1)/2;

for(i=0;i<num-1;i++)
{
	printf("enter a[%d]: ",i);
	scanf("%d",&a[i]);
	sum=sum+a[i];
}

a[num]=total-sum;
printf("missing value is: %d\n",a[num]);
}