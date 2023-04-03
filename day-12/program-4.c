#include<stdio.h>

int cmp(char *str1,char *str2)
{
int i=0,ans;
while (*str1!='\0' && *str2!='\0')
{
if(str1[i]==str2[i])
{ans=0;}
else
{ans=str1[i]-str2[i];}
str1=str1+1;
str2=str2+1;
}
return ans;
}

void main()
{
char str1[100],str2[100];
printf("enter string1: ");
scanf("%s",str1);
printf("enter string2: ");
scanf("%s",str2);

if(cmp(str1,str2)==0)
{printf("%s = %s\n",str1,str2);}
else if(cmp(str1,str2)<0)
{printf("%s < %s\n",str1,str2);}
else if(cmp(str1,str2)>0)
{printf("%s > %s\n",str1,str2);}
}