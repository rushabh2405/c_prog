#include<stdio.h>

typedef struct point
{
int x,y;
}point;

point sum(point a,point b)
{
point temp;
temp.x=a.x+b.x;
temp.y=a.y+b.y;
return temp;
}

void main()
{
point p1,p2;
p1.x=10;
p1.y=20;

p2.x=50;
p2.y=60;

point p3=sum(p1,p2);

printf("%d\n",p3.x);
printf("%d\n",p3.y);
}