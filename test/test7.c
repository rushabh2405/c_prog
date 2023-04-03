#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next;
};

struct node* start1;
struct node* start2;
struct node* start3;

void create_list1()
{
int n,i;
printf("enter number of nodes for 1st list: ");
scanf("%d",&n);

struct node* ptr;

struct node* new=malloc(sizeof(struct node));
printf("enter data for node: ");
scanf("%d",&new->data);
new->next=NULL;
start1=new;
ptr=new;

for(i=1;i<n;i++)
	{
	new=malloc(sizeof(struct node));
	printf("enter data for node: ");
	scanf("%d",&new->data);
	new->next=NULL;
	
	ptr->next=new;
	ptr=new;
	}
}

void sort1()
{
struct node* ptr;
struct node* ptr1;

int temp;
ptr1=start1;

while(ptr1->next!=NULL)
{
	ptr=start1;
	while(ptr->next!=NULL)
		{
		if((ptr->data)>(ptr->next->data))
			{
			temp=ptr->data;
			ptr->data=ptr->next->data;
			ptr->next->data=temp;
			}
		ptr=ptr->next;
		}
ptr1=ptr1->next;
}
}

void create_list2()
{
int n,i;
printf("enter number of nodes for 2nd list: ");
scanf("%d",&n);

struct node* ptr;

struct node* new=malloc(sizeof(struct node));
printf("enter data for node: ");
scanf("%d",&new->data);
new->next=NULL;
start2=new;
ptr=new;

for(i=1;i<n;i++)
	{
	new=malloc(sizeof(struct node));
	printf("enter data for node: ");
	scanf("%d",&new->data);
	new->next=NULL;
	
	ptr->next=new;
	ptr=new;
	}
}

void sort2()
{
struct node* ptr;
struct node* ptr1;

int temp;
ptr1=start2;

while(ptr1->next!=NULL)
{
	ptr=start2;
	while(ptr->next!=NULL)
		{
		if((ptr->data)>(ptr->next->data))
			{
			temp=ptr->data;
			ptr->data=ptr->next->data;
			ptr->next->data=temp;
			}
		ptr=ptr->next;
		}
ptr1=ptr1->next;
}
}

void merge()
{
struct node* ptr1;
ptr1=start1;

struct node* ptr2;
ptr2=start2;

struct node* ptr3;

if((ptr1->data)<(ptr2->data))
	{
	struct node* new=malloc(sizeof(struct node));
	new->data=ptr1->data;		
	new->next=NULL;
		
	start3=new;
	ptr3=new;	
		
	
	ptr1=ptr1->next;		
	}
else
	{
	struct node* new=malloc(sizeof(struct node));
	new->data=ptr2->data;		
	new->next=NULL;
			
	start3=new;	
	ptr3=new;		

	
	ptr2=ptr2->next;
	}

while(ptr1!=NULL && ptr2!=NULL)
	{
	if((ptr1->data)<(ptr2->data))
		{
		struct node* new=malloc(sizeof(struct node));
		new->data=ptr1->data;		
		new->next=NULL;
		ptr3->next=new;	
		
		ptr3=ptr3->next;
		ptr1=ptr1->next;		
		}
	else
		{
		struct node* new=malloc(sizeof(struct node));
		new->data=ptr2->data;		
		new->next=NULL;
		ptr3->next=new;		

		ptr3=ptr3->next;
		ptr2=ptr2->next;
		}
}
if(ptr2==NULL)
	{
	ptr3->next=ptr1;
	}
else if(ptr1==NULL)
	{
	ptr3->next=ptr2;
	}
}

void display_list3()
{
struct node* ptr;
ptr=start3;
int i=0;
while(ptr!=NULL)
	{
	printf("value[%d]=%d\n",i+1,ptr->data);
	i++;
	ptr=ptr->next;
	}
}


void main()
{
create_list1();
sort1();

create_list2();
sort2();

merge();

printf("list\n");
display_list3();

}
