#include <stdio.h>

int main(){

    float a, b;

    scanf("%f %f", &a, &b);

    float porc = ((b - a)/a) * 100;

    printf("%.2f%", porc);

    return 0;
}