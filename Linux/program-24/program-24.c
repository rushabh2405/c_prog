#include<fcntl.h>
#include<stdio.h>
int main()
{	char str[10];
	int fd;
	fd=open("linux.txt",O_RDWR|O_CREAT|O_TRUNC,0660);
	if(fd<0)
		{	
		printf("could not open file\n");
		}
	dup2(fd,1);	
	printf("sample1");
	printf("sample2");
	puts("sample3");
}
