#include<stdio.h>
void main()
{
char ch;
FILE *fp;
fp=fopen("try1","r");

while(ch!=EOF)
{
ch=getc(fp);
printf("%c",ch);
}
}
