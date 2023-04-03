#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	int stat,pid_t,chpid,child1,child2;
	printf("I am a process my process id is :%d\n",getpid());
	printf("I am creating two child processes & make them run some code\n");
	child1 = fork();
	if(child1==0)
	{
		printf("I am first child , my pid is %d\n",getpid());
		printf("I am tried , sleeping for 10 sec\n");
		sleep(10);
		exit(0);

	}
	child2 = fork();
	if(child2==0)
	{
		printf("I am first child , my pid is %d\n",getpid());
		printf("I am tried , sleeping for 5 sec\n");
		sleep(5);
		exit(0);
	}
	printf("I am parent , my children are working & sleeping , i wait for them\n");
	chpid = wait(&stat);
	if(chpid==child1)
	{
		printf("My first child terminated with status %d\n",WEXITSTATUS(stat));
	}
	if(chpid==child2)
	{
		printf("My second child terminated with status %d\n",WEXITSTATUS(stat));
	}
	printf("both childeren got terminated ,now i will do the same\n");
}
