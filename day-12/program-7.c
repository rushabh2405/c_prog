#include<stdio.h>
#include<string.h>

void capital(char *str1)
{
int i,count=0;
for(i=0;i<strlen(str1);i++)
	{
	if(str1[i]>='A' && str1[i]<='Z')
	{count=count+1;}
	}
if(count==strlen(str1)){printf("true\n");}
else {printf("false\n");}
}

void main()
{
char str1[100];

printf("enter string1: ");
scanf("%s",str1);
capital(str1);
}