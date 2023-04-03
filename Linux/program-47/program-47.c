#include<stdio.h>
int main()
{
	int ret;
	printf("I am going to exec an  command line args\n");
	ret=execl("/home/rushabh/Desktop/C_program-main/Linux/program-46/program-46","./	program-46","linux","kernal","driver",0);
	printf("i executed ls program %d\n",ret);
}
