#include<stdio.h>
#include<fcntl.h>
#define BUF_SIZE 1024

int main()
{
int inputFD,outputFD,openFLAGS;
mode_t fileperms;
ssize_t numRead;
char buf[BUF_SIZE];

inputFD = open("fileA.txt",O_RDONLY);
if(inputFD==-1)
	{
	printf("open error\n");
	return;
	}

outputFD = open("fileB.txt",O_RDWR,777);
if(outputFD==-1)
	{
	printf("opening file\n");
	return;
	}

while((numRead=read(inputFD,buf,BUF_SIZE))>0)
{
	if(write(outputFD,buf,numRead) !=numRead)
		{
		printf("write Erroe\n");
		return;
		}
	printf("%d\n",numRead);
}

if(numRead==-1)
	{
	printf("Read Error\n");
	return;
	}
if(close(inputFD)==-1)
	{
	printf("close input\n");
	return;
	}
if(close(outputFD)==-1)
	{
	printf("close output\n");
	return;
	}
}
