#include<stdio.h>
int main()
{
    float a,b,AM,HM;
    printf("enter two numbers:");
    scanf("%f%f",&a,&b);
    AM=(a+b)/2;
    HM=(a+b)/(a+b);
    printf("Arithmetic Mean %.2f\nHarmonic Mean=%.2f\n",AM,HM);
return 0;
}
