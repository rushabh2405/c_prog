#include<stdio.h>
void main()
{
char c1;
printf("enter any character: ");
scanf("%c",&c1);

if(c1>64 && c1<91)
{
printf("character %c is in upper case\n",c1);
}  
else if(c1>96 && c1<123)
{
printf("character %c is in lower case\n",c1);
}  
else if(c1>47 && c1<58)
{
printf("character %c is in digit\n",c1);
}  
else
{
printf("character %c is invalid \n",c1);
}
}