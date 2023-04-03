#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

int main()
{	
	int fd;
	struct stat st;
	fd=open("linux.txt",O_RDONLY);
	fstat(fd,&st);	
	//stat("linux.txt",&st);
	printf("file size  =%lu\n",(st.st_size));
	printf("file inode  =%lu\n",st.st_ino);
	printf("file uid  =%u\n",st.st_uid);
	printf("file gid  =%u\n",st.st_gid);
	printf("size disc of block=%lu\n",st.st_blksize);
	printf("\n\n");	
	close(fd);
	return 0;
}
