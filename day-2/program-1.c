#include<stdio.h>
void main()
{
int n1,n2,n3,n4;
printf("enter a four number: ");
scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

if(n1>n2 &&n1>n3 && n1>n4)
{
printf("number %d is the max value\n",n1);
}  
else if(n2>n1 && n2>n3 && n2>n4)
{
printf("number %d is the max value\n",n2);
}  
else if(n3>n1 &&n3>n2 && n3>n4)
{
printf("number %d is the max value\n",n3);
}  
else
{
printf("number %d is the max value\n",n4);
}
}
