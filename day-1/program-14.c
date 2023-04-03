#include<stdio.h>
void main()
{
float height;
printf("enter height in feet: ");
scanf("%f",&height);
printf("distance in meter is: %f\n",height/3.281);
printf("distance in inches is: %f\n",12*height);
printf("distance in centimeter is: %f\n",30.48*height);
}
