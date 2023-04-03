#include<stdio.h>
#include<fcntl.h>

int main()
{
int fd1,fd2,fd3;
for(int i=1;i<1022;i++)
{
fd1=open("linux111.txt",O_WRONLY,777);
}
printf("fd returned by kernal for linux 111.txt=%d\n",fd1);
close(fd1);
}
