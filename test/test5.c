#include<stdio.h>
#include<string.h>

void main()
{
int i,j,len1,len2,ans;
char str1[100],str2[100],temp1,temp2;

printf("enter string1: ");
scanf("%s",str1);

printf("enter string1: ");
scanf("%s",str2);


len1=strlen(str1);
len2=strlen(str2);

if(len1==len2)
{
	for(i=0;i<len1;i++)
	{
		for(j=i+1;j<len1;j++)
		{
		if(str1[j]>str1[i])
		{
		temp1=str1[j];
		str1[i]=str1[j];
		str1[j]=temp1;
		}

		if(str2[j]>str2[i])
		{
		temp2=str2[j];
		str2[i]=str2[j];
		str2[j]=temp2;
		}
		}
	}
ans=strcmp(str1,str2);

if(ans==0){printf("anagram\n");}
else{printf("not anagram\n");}
}
else
{printf("not anagram\n");}
}

