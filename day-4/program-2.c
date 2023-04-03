#include<stdio.h>
void main()
{
char a;
printf("enter any character: ");
scanf("%c",&a);

switch(a)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
	printf("it's a vowel\n");
break;

default:
	printf("it's is consonant\n");
break;
}
}