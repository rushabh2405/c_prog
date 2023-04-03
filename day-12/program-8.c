#include<stdio.h>
#include<string.h>

void rev(char *str1,int k)
{
int i,temp;

if(k>strlen(str1))
{
k=strlen(str1);
}

for(i=0;i<k;i++)
	{
	temp=str1[i];
	str1[i]=str1[k-1];	
	str1[k-1]=temp;
	k=k-1;	
	}
}

void main()
{
int k;
char str1[100];

printf("enter string1: ");
scanf("%s",str1);

printf("enter k: ");
scanf("%d",&k);

rev(str1,k);
printf("reverse string is: %s\n",str1);
}