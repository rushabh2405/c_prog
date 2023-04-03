#include<stdio.h>				//cirlular loop

int r=-1,f=-1,size=5;

int isfull()
{
if((f==0 && r==size-1) || r==f-1)	//full condition
{	return 1;
	}
else
	{
	return 0;
	}
}

int insert_front(int a[],int data)
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
		r=0;
		}
	else
		{
		if(f==0)
			{
			f=size-1;
			}
		else
			{
			f--;			
			}
		}
	a[f]=data;
	printf("%d is added to queue at f=%d & r=%d \n",a[f],f,r);
	}
}


int insert_back(int a[],int data)
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
	printf("%d is added to queue at f=%d & r=%d\n",a[r],f,r);
	}
}

int delete_front(int a[])
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
	printf("%d is removed from queue at f=%d & r=%d\n\n",data1,f,r);	
	}
}

int delete_back(int a[])
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
		if(r==0)
			{
			r=size-1;
			}
		else
			{
			r--;
			}
	}
	printf("%d is removed from queue at f=%d & r=%d\n\n",data1,f,r);	
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
	insert_front(a,data);
	}
delete_back(a);
}
