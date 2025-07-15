#include<stdio.h>
int main()
{
    float l,b,h,sa,v;
    printf("Enter length,breadth and height:");
    scanf("%f%f%f",&l,&b,&h);
    sa=2*(1*b+b*h+1*h);
    v=l*b*h;
    printf("surface area=%2f\nvolume=%2f\n",sa,v);
return 0;
}

