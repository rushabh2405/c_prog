#include<stdio.h>
#include<string.h>

int isalfa(char str1)
{
int i;
if(!(str1>='0' && str1<='9'))    //alfa
	{return 1;}
else{return 0;}     //not alfa
}

void main()
{
int ans,i,j=0;
char str1[100];

printf("enter string1: ");
scanf("%s",str1);


for(i=0;i<strlen(str1);i++)
	{
		if (isalfa(str1[i])==1)
		{
		str1[j]=str1[i];
		j=j+1;
		}
	}	
str1[j]='\0';
printf("%s\n",str1);
}