#include<stdio.h>     //left side
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

temp=a[0];
for(i=0;i<n;i++)  
{	
	a[i]=a[i+1];   
}
a[n-1]=temp;

for(i=0;i<n;i++)
{
printf("a[%d]:%d  ",i,a[i]);
}
}