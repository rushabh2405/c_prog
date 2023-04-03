#include<stdio.h>
void main()
{
int n,a[100],copied[100],i,n_count=0,p_count=0,z_count=0,e_count=0,o_count=0;

printf("enter number of data: ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter %d data: ",i);
scanf("%d",&a[i]);
}

printf("copied array is:");
for(i=0;i<n;i++)
{
	copied[i]=a[i];
	printf("copied[%d]=%d,",i,copied[i]);
}

printf("\nreverse data is: ");
for(i=n-1;i>=0;i--)
{
	printf("%d, ",a[i]);
}

for(i=0;i<n;i++)
{
	if(a[i]>0)
	{
	p_count=p_count+1;	
	}
	if(a[i]<0)
	{
	n_count=n_count+1;	
	}
	if(a[i]==0)
	{
	z_count=z_count+1;	
	}
	if(a[i]%2==0)
	{
	e_count=e_count+1;	
	}
	if(a[i]%2!=0)
	{
	o_count=o_count+1;	
	}
}
printf("\nno of positive number are:%d\n",p_count);
printf("no of negative number are:%d\n",n_count);
printf("no of zeros are:%d\n",z_count);
printf("no of even number are:%d\n",e_count);
printf("no of odd number are:%d\n",o_count);
}