#include <stdio.h>
#include<string.h>
void main()
{
int i;
char arr[7]="RUSHABH";
char *ptr=arr;

//char *ptr="RUSHABH";seg err->read only access
for(i=0;i<strlen(ptr);i++)
	{
	ptr[i]=ptr[i]+32;
	printf("%c\n",ptr[i]);
	}
}
