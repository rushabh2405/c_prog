#include<stdio.h>
void main()
{
int *fp;
fp=(int *)malloc(sizeof(int));
*fp=25;
printf("%d",*fp);
free(fp);
}