#include<stdio.h>
void main()
{
int a,b,choice,ans;
printf("enter any two number: ");
scanf("%d %d",&a,&b);
printf("enter choice (add:1,sub:2,mul:3,div:4): ");
scanf("%d",&choice);

switch(choice)
{
case 1:
	ans=a+b;
	printf("sum of a and b is: %d\n",ans);
break;
case 2:
	ans=a-b;
	printf("subtraction of a and b is : %d\n",ans);
break;
case 3:
	ans=a*b;
	printf("multiplication of a and b is: %d\n",ans);
break;
case 4:
	ans=a/b;
	printf("division of a and b is: %d\n",ans);
break;
}
}