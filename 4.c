#include<stdio.h>
int main()
{
float u,a,v,t,s;
    printf("Enter initial velocity,acceleration and time:");
    scanf("%f %f %f",&u,&a,&t);
    v=u+a*t;
    s=u*t+0.5*a*t*t;
    printf("Final velocity=%.2f\nDistance=%.2f\n",v,s);
  return 0;

}

    