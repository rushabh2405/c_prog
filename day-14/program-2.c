#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,*list=malloc(3*sizeof(int));

list[0]=1;
list[1]=2;
list[2]=3;
for(i=0;list[i]!=NULL;i++)
{
printf("list[%d]:%d\n",i,list[i]);
}
free(list);
}