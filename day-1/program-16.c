#include<stdio.h>
void main()
{
int x,y;
printf("enter any value of x and y: ");
scanf("%d %d",&x,&y);
printf("x^3+x^2+2x+5: %d\n",(x*x*x)+(x*x)+(2*x)+5);
printf("x^2+y^2+2xy: %d\n",(x*x)+(y*y)+(2*x*y));
}
