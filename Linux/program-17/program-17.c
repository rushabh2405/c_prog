#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
int fd,len;
int x;
char write_buf[60]="linux kernal new program?, wow?";

fd=open("file.txt",O_CREAT|O_RDWR,777);
write(fd,write_buf,60);
close(fd);
return 0;
}

