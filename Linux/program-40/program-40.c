#include<stdio.h>
void main()
{
	int id;
	int cnt=0;
	printf("I am going create a new process\n");
	id=fork();
	if(id)
	{
		while(cnt<10)
		{
			cnt++;
			printf("I am parent ,my child process is :%d\n",id);
			sleep(1);
		}
	}
	else
	{
		while(cnt<10)
		{
			cnt++;
			printf("I am child process I got value as :%d\n",id);
			sleep(1);
		}	
	}
}

