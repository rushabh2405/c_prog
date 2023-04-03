/*
#include<stdio.h>

void f(int *p)
{
int i;
for(i=0;i<5;i++)
{
printf("enter a[%d]: ",i);
scanf("%d",p);
p=p+1;
}
}

void f1(int *p)
{
int i;
for(i=0;i<5;i++)
{
printf("%d",*p);
p=p+1;
}
printf("\n");
}

void main()
{
int a[5];
f(a);
f1(a);
}
*/
/*
#include<stdio.h>

void print(int *p)
{
int i,j;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("a[%d][%d]:%d, ",i,j,*p+i*3+j);
	}
	printf("\n");
}
printf("\n");
}

void main()
{
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
print(a);
}
*/
#include<stdio.h>
#include<string.h>
void check(char *str,int len)
{
int i,flag=0;
for(i=0;i<len;i++)
{
if(!(str[i]>='0' && str[i]<='9'))
{flag=1;}
}
if(flag==1)
{printf("enter integer value only\n");}
}

void pali(char *str,int len)
{
int i,flag=0;
for(i=0;i<len;i++)
	{
	if(str[i]!=str[len-i-1])
		{
		flag=1;
		break;
		}
	}
if(flag==1){printf("number is Not palindrome\n");}
else{printf("number is palindrome\n");}
}

void main()
{
int len;
char str[100];
printf("enter integer value: ");
scanf("%s",str);
len=strlen(str);
check(str,len);
pali(str,len); 
}
