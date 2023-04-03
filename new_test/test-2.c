#include<stdio.h>
#include<string.h>
void main()
{
int i,asic=0,freq[26]={0};
char name[100];

printf("enter name: ");
scanf("%s",name);

printf("frequency is\n");

for(i=0;i<strlen(name);i++)
	{	
	if(name[i]>='a' && name[i]<='z')
		{
		asic=name[i]-97;
		freq[asic]=freq[asic]+1;
		}
	}

for(i=0;i<=25;i++)
	{
	if(freq[i]!=0)
		{
		printf("%c->%d\n",i+97,freq[i]);
		}	
	}
}
