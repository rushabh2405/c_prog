#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
int fd,len;
char write_buf[50]="Hi how are you?,wow!";
char read_buf[50];

fd = open("file.txt",O_CREAT|O_RDWR,777);

len = write(fd,write_buf,50);

printf("Return value from write open =%d\n",len);

lseek(fd,0,SEEK_SET);

read(fd,read_buf,len);
printf("Data from buffer = %s\n",read_buf);
close(fd);
return 0;
}
