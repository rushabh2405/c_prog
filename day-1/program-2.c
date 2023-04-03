#include<stdio.h>
void main()
{
int dist;
printf("enter distance between two cities: ");
scanf("%d",&dist);
printf("distance in meter is: %d\n",1000*dist);
printf("distance in feet is: %f\n",3280.84*dist);
printf("distance in inches is: %f\n",39370.1*dist);
printf("distance in centimeter is: %d\n",10000*dist);
}
