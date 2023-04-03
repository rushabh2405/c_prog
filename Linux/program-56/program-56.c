#include<pthread.h>
#include<stdio.h>
void *thr_fn1(void*arg)
{
	printf("thrd1 returning\n");
	printf("THD ID =%u\n",pthread_self());
	return((void*)1);

}
void *thr_fn2(void*arg)
{
	printf("thrd2 exiting\n");
	printf("THD ID =%u\n",pthread_self());
	pthread_exit((void*)2);

}
int main(void)
{
	int err;
	pthread_t tid1,tid2;
	void *tret;
	pthread_create(&tid1,NULL,thr_fn1,NULL);
	pthread_create(&tid2,NULL,thr_fn2,NULL);
	pthread_join(tid1,&tret);
	printf("Thread 1 exit code %d\n",(int)tret);
	pthread_join(tid2,&tret);
	printf("Thread 2 exit code %d\n",(int)tret);
	exit(0);
}

