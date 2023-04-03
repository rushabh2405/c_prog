#include<stdio.h>

char grade(int m)
{
if(m<=100 && m>80)
{return 'a';}

if(m<=80 && m>60)
{return 'b';}

if(m<=60 && m>50)
{return 'c';}

if(m<=50)
{return 'f';}

}

void main()
{
int mrk;
char g; 
printf("enter marks: ");
scanf("%d",&mrk);

g=grade(mrk);
printf("your grade is: %c\n",g);
}