#include<stdio.h>

void catmystr(char *str1,char *str2)
{
int i=0;
while (*str1!='\0')
{
str1=str1+1;
}

while (*str2!='\0')
{
str1[i] =*str2;
str2 = str2+1;
i=i+1;
}

}

void main()
{
char str1[100],str2[100];
printf("enter string1: ");
scanf("%s",str1);
printf("enter string2: ");
scanf("%s",str2);

catmystr(str1,str2);

printf("%s\n",str1);
}