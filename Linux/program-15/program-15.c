#include<stdio.h>
#include<fcntl.h>

int main()
{
int fd1,fd2,fd3;
fd1=creat("linux111.txt",777);
fd2=creat("linux222.txt",777);
fd3=creat("linux333.txt",777);

printf("fd returned by kernal for linux 111.txt=%d\n",fd1);
printf("fd returned by kernal for linux 222.txt=%d\n",fd2);
printf("fd returned by kernal for linux 333.txt=%d\n",fd3);

close(fd1);
close(fd2);
close(fd3);
return 0;
}
