#include<stdio.h>
struct student
{
int rollno;
char name[10];
};

void main()
{
int i,num;
struct student s[100];

printf("enter number student: ");
scanf("%d",&num);
	
for(i=0;i<num;i++)
	{
	printf("enter student rollno: ");
	scanf("%d",&s[i].rollno);
	printf("enter student name: ");
	scanf("%s",s[i].name);
	}

printf("rollno	name\n");
for(i=0;i<num;i++)
	{
	printf("%d	%s\n",s[i].rollno,s[i].name);
	}
}