#include<stdio.h>
int main()
{
    float r,h,surface_area,volume,PI;
    printf("enter radius and height:");
    scanf("%f%f",&r,&h);
    surface_area = 2 * PI * r * r + 2 * PI * r *h;
    volume= PI * r * r * h;
    printf("Surface area =%.2f\nvolume=%.2f\n",surface_area,volume);
return 0;
}