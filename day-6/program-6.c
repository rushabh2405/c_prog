#include<stdio.h>
void main()
{
int n,i,j,k,left=0,right=0;

printf("enter number of data: ");
scanf("%d",&n);

int a[n];

for(i=0;i<n;i++)
{
printf("enter %d data: ",i);
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)  
{	
	j=i;	
	for(i=0;i<j;i++)  
	{
	left=left+a[i];
	}
	for(k=i+1;k<n;k++)
	{
	right=right+a[k];
	}
	if(right==left)
	{
		printf("number is equilibrum at index:%d\n",j);
		break;
	}
	left=0;
	right=0;
}
}