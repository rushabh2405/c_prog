#include <stdio.h>
void main()
{
int decimal, binary[32], index=0, count=0;
printf("enter a decimanl number: ");
scanf("%d", &decimal);

while(decimal>0)
 {
	binary[index] = decimal %2;
	decimal = decimal/2;
	index++;
 }

printf("Binary: ");

for (int i=index-1; i>=0;i--)
 {
	printf("%d",binary[i]);
	if(binary[i]==1)
	{
		count++;
	}
 }

printf("\nno of 1's are: %d\n", count);
}
