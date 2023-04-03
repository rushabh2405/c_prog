#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};

struct node *start=NULL;
struct node *ptr=NULL;

void insert()
{
int data,i;

printf("enter data for node: ");
scanf("%d",&data);
struct node *new=malloc(sizeof(struct node));
new->data=data;
new->next=NULL;
start=new;
ptr=new;

for(i=0;i<3;i++)
	{
	printf("enter data for node: ");
	scanf("%d",&data);
	struct node* new=malloc(sizeof(struct node));
	new->data=data;
	new->next=NULL;
	ptr->next=new;
	ptr=new;
	}
}

void display()
{
ptr=start;

if(start==NULL){printf("list is empty");}

while(ptr!=NULL)
	{
	printf("%d ",ptr->data);
	ptr=ptr->next;
	}
printf("\n");
}

void main()
{
insert();
display();
}

