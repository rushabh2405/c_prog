#include<stdio.h>
#include "file.h" //we forcing c preprocessor tool to check whether this file is in current file location
//#include "2.c"
//#include "3.c"
int main()
{
	int a=10,b=5;
	printf("addition of a and b=%d\n",add(a,b));
	printf("subtraction of a and b=%d\n",sub(a,b));
	return 0;
}
