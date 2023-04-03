#include<stdio.h>
void main ()
{
int num,i,j,a[100],flag=0;

printf("enter size of array: ");
scanf("%d",&num);

for(i=0;i<num;i++)
{
	printf("enter a[%d]: ",i);
	scanf("%d",&a[i]);
}
printf("leaders are: ");

for(i=0;i<num;i++)
{
	flag=0;
	for(j=i+1;j<num;j++)
	{
	if(a[i]<a[j])
		{
		flag=1;
		break;
		}
	}

if(flag==0)
{
printf("%d, ",a[i]);
}

}
printf("\n");
}