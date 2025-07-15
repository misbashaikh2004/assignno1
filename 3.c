#include<stdio.h>
int main()
{
    float F,C,K;
    printf("Entre temperature in fahrenheit:");
    scanf("%f",&F);
    C=5.0/9*(F-32);
    K=C+273.15;
    printf("celsius = %.2f\nkelvin=%.2f\n",C,K);
return 0;
}