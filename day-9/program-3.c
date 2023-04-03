#include<stdio.h>

int pw1(int x,int y)
{
int ans=1,i,pw1;
for(i=1;i<=y;i++)
	{
	ans=x*ans;
	}	
return ans;
}

void pw2(int x,int y)
{
int pw2,ans=1,i;
for(i=1;i<=y;i++)
	{
	ans=x*ans;
	}	
printf("power of %d^%d=%d\n ",x,y,ans);
}


void main()
{
int x,y,p1;

printf("enter x: ");
scanf("%d",&x);

printf("enter y: ");
scanf("%d",&y);

p1=pw1(x,y);
printf("power of %d^%d=%d\n ",x,y,p1);

pw2(x,y);
}