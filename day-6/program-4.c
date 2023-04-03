#include<stdio.h>
void main()
{
int n,a[100],i,search;

printf("enter number of data: ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter %d data: ",i);
scanf("%d",&a[i]);
}

printf("enter the number you are searching for: ");
scanf("%d",&search);

for(i=0;i<n;i++)
{
	if(search==a[i])
		{printf("the given number %d is at %d index\n",search,i);}
}

}