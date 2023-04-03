#include<stdio.h>
void main()
{
int num,i,a[100],temp;

printf("enter even size of array: ");
scanf("%d",&num);
while(num%2!=0)
{
printf("try again enter even size of array: ");
scanf("%d",&num);
}

for(i=0;i<num;i++)
	{
	printf("enter a[%d]: ",i);
	scanf("%d",&a[i]);
	}

for(i=0;i<num;i=i+2)
	{
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
	}
printf("array is: ");
for(i=0;i<num;i++)
	{
	printf("%d ,",a[i]);
	}
printf("\n");
}