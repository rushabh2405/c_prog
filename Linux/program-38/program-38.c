#include<stdio.h>
#include<unistd.h>
int main(void)
{
	int pid_1;
	printf("Current process pid = %d\n",getpid());
	//pid_1 = fork();
	pid_1 = vfork();
	if(pid_1==0)
	{
		//sleep(5);
		printf("New child process = %d\n",getpid());
		printf("New child parent process ppid =%d\n",getppid());

	}
	else
	{
		//sleep(3);
		printf("Parent  process = %d\n",getpid());
		printf("Parents parent process ppid =%d\n",getppid());
	}
	//while(1);
	exit(0);
}

