#include<stdio.h>     //right side
void main()
{
int n,i,temp;

printf("enter number of data: ");
scanf("%d",&n);

int a[n];

for(i=0;i<n;i++)
{
printf("enter %d data: ",i);
scanf("%d",&a[i]);
}
temp=a[n-1];

for(i=n-1;i>0;i--)  
{	
	a[i]=a[i-1];   
}
a[0]=temp;

for(i=0;i<n;i++)
{
printf("a[%d]:%d  ",i,a[i]);
}
}