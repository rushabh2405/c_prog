#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct person{
    char name[10];
    long int mobile_no;
    char address[10];
    struct person *next;
  };

struct person *start;  
struct person *ptr;

void insert()
{
long int s_mobile_no;
char s_name[10],s_address[10];

struct person *new=malloc(sizeof(struct person));
printf("enter name: ");
scanf("%s",new->name);

printf("enter mobile no: ");
scanf("%ld",&new->mobile_no);

printf("enter address: ");
scanf("%s",new->address);
printf("\n");

new->next=NULL;

start=new;
ptr=new;

for(int i=1;i<2;i++)
	{
	struct person *new=malloc(sizeof(struct person));
	ptr->next=new;
	printf("enter name: ");
	scanf("%s",new->name);

	printf("enter mobile no: ");
	scanf("%ld",&new->mobile_no);

	printf("enter address: ");
	scanf("%s",new->address);
	printf("\n");
	
	new->next=NULL;
	ptr=ptr->next;
	}
}

void search()
{
char scan_name[10];

printf("enter name: ");
scanf("%s",scan_name);

struct person *ptr;
ptr=start;
while(ptr!=NULL)
	{
	if(!strcmp(ptr->name,scan_name))
		{
		printf("name: %s\nmobile_no: %ld\naddress: %s\n",ptr->name,ptr->mobile_no,ptr->address);
		break;
		}
	ptr=ptr->next;
	}
}

void all()
{
int i=0;

struct person *ptr;
ptr=start;

while(ptr!=NULL)
	{
	printf("person %d\n",i);
	i++;

	printf("name: %s\nmobile_no: %ld\naddress: %s\n\n",ptr->name,ptr->mobile_no,ptr->address);
	ptr=ptr->next;	
	}
}

void main()
{
int n=1;

printf("insert\n");
insert();

while(n!=0)
	{
	printf("enter 1: search\nenter 2: print all\nenter 0: exit\n\n");
	scanf("%d",&n);

	switch(n)
		{
		case 1:
			search();
			break;
		case 2:
			all();
			break;
		}	
	}
}
