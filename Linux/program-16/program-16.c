#include<stdio.h>
#include<fcntl.h>

#include<unistd.h>
int main()
{
int fd;
char buf[3000];
int res;
fd=open("program-16.c",O_CREAT|O_RDWR,664);
printf("%d\n",fd);

if(fd<0)
	{
	printf("file is not opened or created\n");
	}

read(fd,buf,300);
printf("data from buffer =%s\n",buf);
close(fd);
return 0;
}

