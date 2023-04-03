#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next;
};

struct node* start;
struct node* ptr;

void create_list()
{
int n,i;
printf("enter number of nodes: ");
scanf("%d",&n);

struct node* new=malloc(sizeof(struct node));
printf("enter data for node: ");
scanf("%d",&new->data);
new->next=NULL;
start=new;
ptr=new;

for(i=1;i<n;i++)
	{
	struct node* new=malloc(sizeof(struct node));
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
	i=i+1;
	ptr=ptr->next;
	}
}

void insert_first()
{
struct node* new=malloc(sizeof(struct node));
printf("enter data for node at first: ");
scanf("%d",&new->data);
new->next=NULL;

if(start==NULL)
	{
	start=new;
	ptr=new;
	}
else
	{
	new->next=start;
	start=new;
	}
}

void insert_end()
{
struct node* new=malloc(sizeof(struct node));
printf("enter data for node at end: ");
scanf("%d",&new->data);
new->next=NULL;
if(start==NULL)
	{
	start=new;
	ptr=new;
	}
else
	{
	ptr->next=new;
	ptr=new;
	}
}

void insert_end_withoutlastnode()
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

void add_value_after()
{
int v_node;
printf("enter value of node: ");
scanf("%d",&v_node);

struct node* new=malloc(sizeof(struct node));
printf("enter data for after node: ");
scanf("%d",&new->data);
new->next=NULL;

ptr=start;
while(ptr->data !=v_node)
	{
	ptr=ptr->next;
	if(ptr==NULL){break;}
	}
new->next=ptr->next;
ptr->next=new;
}

void add_value_before()
{
struct node* prev;
int v_node;
printf("enter value of node: ");
scanf("%d",&v_node);

struct node* new=malloc(sizeof(struct node));
printf("enter data for previous node: ");
scanf("%d",&new->data);
new->next=NULL;

ptr=start;
while(ptr->data !=v_node)
	{
	prev=ptr;
	ptr=ptr->next;
	if(ptr==NULL){break;}
	}
new->next=prev->next;
prev->next=new;
}

void delete_first()
{
struct node* temp;
if(start==NULL)
	{
	printf("list is empty\n");
	}
else if(start->next==NULL)
	{
	temp=start;
	start=NULL;
	free(temp);
	}
else
	{
	temp=start;
	start=start->next;
	free(temp);
	}
}

void delete_end()
{
struct node* temp;
if(start==NULL)
	{
	printf("list is empty\n");
	}
else if(start->next==NULL)
	{
	temp=start;
	start=NULL;
	free(temp);
	}

else
	{
	temp=start;
	while(temp->next->next!=NULL)
		{
		temp=temp->next;
		}
		temp->next=NULL;
	}
}

void delete_specific()
{
int v_node;
struct node* temp;
struct node* prev;

printf("enter value of node to delete: ");
scanf("%d",&v_node);

if(start==NULL)
	{
	printf("list is empty\n");
	}

else if(start->next==NULL)
	{
	if(start->data==v_node)
		{	
		temp=start;
		start=NULL;
		free(temp);
		}
	else{printf("404 not found\n");}
	}

else
	{
	ptr=start;
	while(ptr->data !=v_node)
		{
		prev=ptr;
		ptr=ptr->next;
		if(ptr==NULL){break;}
		}

	if(ptr==start){delete_first();}
	else if(ptr->next==NULL){delete_end();}
	else	
		{
		prev->next=ptr->next;
		free(ptr);
		}
	}
}

void main()
{
create_list();
//insert_first();
//insert_end();
//printf("\nadd_value_before\n");
//add_value_before();
//printf("\nadd_value_after\n");
//add_value_after();
//delete_first();
//delete_end();
delete_specific();
display_list();
}
