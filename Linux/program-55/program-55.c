#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *PrintHello(void*threadid)
{
	printf("\n Hello world\n");
	printf("I am waiting\n");
	while(1);
}
int main()
{
	pthread_t thread;
	int rc,t=0;
	printf("Creating thread %d\n",t);
	rc = pthread_create(&thread,NULL,PrintHello,NULL);
	printf("\n Thread ID :%u",thread);

	sleep(6);
	t = pthread_cancel(thread);
	printf("\n Cancel thread\n");
	printf("\n Thread ID :%u\n",thread);
}
