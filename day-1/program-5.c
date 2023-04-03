#include<stdio.h>
void main()
{
int length,breath,radius;
printf("enter length and breath of rectangle: ");
scanf("%d %d",&length,&breath);
printf("enter radius of circle: ");
scanf("%d",&radius);

printf("area of rectangle is: %d\n",length*breath);
printf("perimeter of rectangle is: %d\n",(2*length)*(2*breath));
printf("area of circle is: %f\n",2*3.14*radius*radius);
printf("perimeter of rectangle is: %f\n",2*3.14*radius);
}


