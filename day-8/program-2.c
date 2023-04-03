#include<stdio.h>
void main()
{
int a[3][3]={{1,1,1},{1,1,1},{1,1,1}};
int b[3][3]={{1,1,1},{1,1,1},{1,1,1}};
int ans[3][3],i,j,k;

for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		{
		ans[i][j]=0;
		for(k=0;k<3;k++)
			{
			ans[i][j]=ans[i][j]+(a[i][k]*b[k][j]);
			}	
		}
	}

printf("matrix a*b is: \n");
for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		{
		printf("%d ",ans[i][j]);
		}
printf("\n");
	}

}