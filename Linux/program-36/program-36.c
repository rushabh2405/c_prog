#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("my process pid =%d\n",getpid());
	printf("my process pid =%d\n",getppid());	

	printf("Linux kernal\n");
	while(1);
	return 0;
}
