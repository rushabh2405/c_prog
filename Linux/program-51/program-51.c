#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	int stat,pid_t,chpid1,chpid2,child1,child2;
	
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

	printf("i am parent ,my childeren are working &sleepinng,i wait for them\n");
	
	chpid1 = waitpid(child1,&stat,0);
	printf("my first child terminted with status %d\n",WEXITSTATUS(stat));
	printf("terminted child1 pid from wait =%d\n", chpid1);	

	chpid2 = waitpid(child2,&stat,0);
	printf("my second child terminted with status %d\n",WEXITSTATUS(stat));
	printf("terminted child2 pid from wait =%d\n", chpid2);	

	printf("both childeren got terminated ,now i will do the same\n");
}
