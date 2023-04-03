#include<stdio.h>
#include<unistd.h>
int main()
{
	int n;
	char buf[30];
	write(1,"this is written to fd number 1\n",31);
	write(2,"this is written to fd number 2\n",31);
	write(1,"enter is line of text 1\n",21);
	n=read(0,buf,80);
	write(1,"following is the line i read\n",29);
	write(1,buf,n);
}

