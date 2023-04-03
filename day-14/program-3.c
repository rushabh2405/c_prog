#include<stdio.h>
void main()
{
int i,*list=malloc(3*sizeof(int));
list[0]=1;
list[1]=2;
list[2]=3;

int *temp=malloc(4*sizeof(int));
for(int i=0;list[i]!=NULL;i++)
{temp[i]=list[i];}
free(list);
temp[3] = 4;
list = temp;
for(i=0;list[i]!=NULL;i++)
{printf("list[%d]:%d\n",i,list[i]);}
}