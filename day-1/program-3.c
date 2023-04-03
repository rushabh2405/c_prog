#include<stdio.h>
void main()
{
int s1,s2,s3,s4,s5,sum;
printf("enter marks of five subject: ");
scanf("%d %d %d %d %d",&s1 ,&s2 ,&s3 ,&s4 ,&s5);

sum=s1+s2+s3+s4+s5;
printf("agregated marks are: %d\n",sum);
printf("percentage is: %d\n",sum/5);

}


