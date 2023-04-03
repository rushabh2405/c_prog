#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)//argc count total no of arg
{				//argv stores all parameters
int i;
printf("\nFILE NAME: %s\n",argv[0]);
printf("\nTOTAL NUMBER OF ARGUMENTS: %d\n",argc);
printf("\nARGUMENT PASSED: ");
for(i=1;i<argc;i++)
	{
	printf("%s ",argv[i]);
	}
printf("\n");
}
