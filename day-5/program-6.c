#include<stdio.h>
void main()
{
int num,rem,sum,i,temp,count=0;

printf("enter any number: ");
scanf("%d",&num);

for (i=num;i>0;i--)
{	
	temp=i;
	sum=0;
	while(temp>0)
	{
	rem=temp%10;
	sum=sum+(rem*rem*rem);
	temp=temp/10;
	}
	if(sum==i)
	{
	count=count+1;
	printf("%d is a armstrong number\n",i);
	}	
}
printf("no of armstrong number is:%d\n",count);
}