#include <stdio.h>
void main()
{
int decimal, binary[32], index=0, count=0;
printf("enter a decimanl number: ");
scanf("%d", &decimal);

printf("Binary: ");
while(decimal>0)
 {
	binary[index] = decimal & 1;
	printf("%d",binary[index]);
	if(binary[index]==1){count++;}
	index++;
	decimal=decimal>>1;
 }

printf("\nno of 1's are: %d\n", count);
}
