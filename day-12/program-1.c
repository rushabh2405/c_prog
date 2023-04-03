#include<stdio.h>
#include<string.h>

void mystrlen0(char *str)
{
int len;
len=strlen(str);
printf("length of string is :%d\n",len);
}

void mystrlen1(char *str)
{
int len=0;
while(*str!='\0')
	{
	len++;
	str=str+1;
	}
printf("length of string is :%d\n",len);
}

void main()
{
int len;
char str[100];
printf("enter string: ");
scanf("%s",str);

mystrlen0(str);
mystrlen1(str);
}