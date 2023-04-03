#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next;
};

struct node* start;

void create_list()
{
int n,i;
printf("enter number of nodes: ");
scanf("%d",&n);

struct node* ptr;

struct node* new=malloc(sizeof(struct node));
printf("enter data for node: ");
scanf("%d",&new->data);
new->next=NULL;
start=new;
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

void display_list()
{
struct node* ptr;
ptr=start;
int i=0;
while(ptr!=NULL)
	{
	printf("value[%d]=%d\n",i+1,ptr->data);
	i++;
	ptr=ptr->next;
	}
}

void sort()
{
struct node* ptr;
struct node* ptr1;

int temp;
ptr1=start;

while(ptr1->next!=NULL)
{
	ptr=start;
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

void main()
{
create_list();
sort();
display_list();
}
