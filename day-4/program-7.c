#include<stdio.h>
void main()
{
int n,i,count=0;

printf("enter no of n: ");
scanf("%d",&n);

printf("number divisible by 5 are: ");
for (i=1;i<=n;i++)
{	
	if(i%5==0)
	{
		printf("%d ",i);
		count=count+1;
	}
}
printf("\n");
printf("count is:%d\n",count);
}
