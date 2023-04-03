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

void insert_end()
{
struct node* new=malloc(sizeof(struct node));
printf("enter data for node: ");
scanf("%d",&new->data);
new->next=NULL;
struct node *temp;
temp=start;

while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=new;
}

void main()
{
create_list();
display_list();
insert_end();
display_list();
}
