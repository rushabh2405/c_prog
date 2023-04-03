#include<stdio.h>
struct cricketer
{
char name[10];
int score;
struct cricketer *next;
};

void main()
{
int i,num;
struct cricketer c[3]={{"kohli",105,c+1},{"rohit",57,c+2},{"gill",20,c}};

struct cricketer *p;
p=&c[0];
	
for(i=0;i<3;i++)
	{
	printf("%s	%d\n",(*p).name,p->score);
	p=p->next;
	}
}
