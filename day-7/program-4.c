#include<stdio.h>
void main ()
{
int a[4][4]={{0,1,1,0},{1,0,1,1},{0,0,0,0},{1,0,1,0}};
int i,j,sum_row=0,sum_column=0,index_i,index_j;

for (i=0;i<4;i++)
	{
	sum_row=0;
	for(j=0;j<4;j++)
		{
		sum_row=sum_row+a[i][j];
		}
	if(sum_row==0){index_i=i;}
	}

for (j=0;j<4;j++)
	{
	sum_column=0;
	for(i=0;i<4;i++)
		{
		sum_column=sum_column+a[i][j];
		}
	if(sum_column==3){index_j=j;}
	}

printf("celebrity is:a[%d][%d]\n",index_i,index_j);
}