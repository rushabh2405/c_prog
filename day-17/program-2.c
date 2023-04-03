#include<stdio.h>				//cirlular loop

int r=-1,f=-1,size=5;

int isfull()
{
if((f==0 && r==size-1) || r==f-1)
{ //delete  last       circular
 //nathi    position   mate
//thaiyu    pack che   loop full                         		
	return 1;
	}
else
	{
	return 0;
	}
}

int nq(int a[],int data)
{
if(isfull())                                     //oveflow
	{	
	printf("queue is full\n");
	}
else                                          //if space is available
	{
	if(f==-1)
	{
	f=0;
	}
	r=(r+1)%size;
	a[r]=data;
	printf("%d is added to queue\n",a[r]);
	}
}

int dq(int a[])
{
if(f==-1)
	{
	printf("queue is empty\n");
	}
else
	{
	int data1=a[f];
	if(f==r)
		{
		f=-1;
		r=-1;
		}
	else
	{
		if(f==size-1)
			{
			f=0;
			}
		else
			{
			f++;
			}
	
	}
	printf("%d is removed from queue\n",data1);	
	}
}

void main()
{
int i,data,a[size];
printf("enter size of array: ");
scanf("%d",&size);

for(i=0;i<size;i++)
	{
	printf("enter a[%d]: ",i);
	scanf("%d",&data);
	nq(a,data);
	}

dq(a);
dq(a);
nq(a,10);
nq(a,20);

dq(a);
dq(a);
dq(a);
dq(a);
dq(a);
dq(a);
}