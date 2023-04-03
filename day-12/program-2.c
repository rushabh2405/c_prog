#include<stdio.h>

void cpymystr(char *str,char *dest)
{
int i=0;
while (*str!='\0')
{
dest[i]=*str;
str = str+1;
i=i+1;
}
}


void main()
{
char str[100],dest[100];
printf("enter string: ");
scanf("%s",str);

cpymystr(str,dest);

printf("%s\n",dest);
}