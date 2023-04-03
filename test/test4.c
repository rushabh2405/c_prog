#include<stdio.h>
void main()
{
int num,i,j,a[100],current_ans,final_ans,ans[100];

printf("enter size of array: ");
scanf("%d",&num);

for(i=0;i<num;i++)
	{
	printf("enter a[%d]: ",i);
	scanf("%d",&a[i]);
	}

for(i=0;i<num;i++)
	{
	current_ans=0;
	final_ans=-32768;	
	for(j=i+1;j<num;j++)
	{
	current_ans=a[i]-a[j];
		
	if(final_ans<current_ans){final_ans=current_ans;}
	}
	ans[i]=final_ans;
	}
ans[num-1]=a[num-1];

printf("answer array is: ");
for(i=0;i<num;i++)
	{
	printf("%d, ",ans[i]);
	}
printf("\n");
}

