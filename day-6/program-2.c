#include<stdio.h>
void main()
{
int n,a[100],i,min,max,sum=0,avg;

printf("enter number of data: ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter %d data: ",i+1);
scanf("%d",&a[i]);
}

min=a[0];
for(i=1;i<n;i++)
{
	if(a[i]<min)
		{min=a[i];}
}
printf("minimum value is:%d\n",min);

max=a[0];
for(i=1;i<n;i++)
{
	if(a[i]>min)
		{max=a[i];}
}
printf("maximum value is:%d\n",max);

for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("sum of array is:%d\n",sum);
printf("avg of array is:%d\n",sum/n);

}