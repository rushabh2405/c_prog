#include<stdio.h>
void main()
{
int n,a[100],i;

printf("enter number of data: ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter %d data: ",i+1);
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
printf("a[%d]= %d\n",i,a[i]);
}

}