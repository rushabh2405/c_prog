#include<stdio.h>
void main()
{
int flag,count=0,count_1=0;
char ch,ch1;
FILE *fp;
fp=fopen("try1","r");

FILE *fp1;
fp1=fopen("try2","r");

while(ch!=EOF || ch1!=EOF)
	{
	ch=getc(fp);
	ch1=getc(fp1);
	
	if(ch!=ch1){flag=1;}
	else{flag=0;}
	
	if(ch!=EOF)
	{count=count+1;}
	if(ch1!=EOF)
	{count_1=count_1+1;}
	}
if(flag==1){printf("unequal\n");}
if(flag==0){printf("equal\n");}

printf("%d %d",count,count_1);
}