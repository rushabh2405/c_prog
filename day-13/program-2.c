#include<stdio.h>
struct student
{
int rollno;
char name[10];
};

void main()
{
int i,num;
struct student s[100],*p;

printf("enter number student: ");
scanf("%d",&num);
	
for(i=0;i<num;i++)
	{
	p=&s[i];
	printf("enter student rollno: ");
	scanf("%d",&(*p).rollno);
	printf("enter student name: ");
	scanf("%s",p->name);
	}

i=0;
p=&s[i];
printf("rollno	name\n");
for(i=0;i<num;i++)               //using pointer
	{
	printf("%d	%s\n",(*p).rollno,p->name);
	p=p+1;
	}
}