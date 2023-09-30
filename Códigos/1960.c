#include <stdio.h>

void romano(int num){

    if(num >= 1000){
        printf("M");
        romano(num - 1000);
    } 
    else if(num >= 900){
        printf("CM");
        romano(num - 900);
    }
    else if(num >= 500){
        printf("D");
        romano(num - 500);
    } 
    else if(num >= 400){
        printf("CD");
        romano(num - 400);
    } 
    else if(num >= 100){
        printf("C");
        romano(num - 100);
    } 
    else if(num >= 90){
        printf("XC");
        romano(num - 90);
    } 
    else if(num >= 50){
        printf("L");
        romano(num - 50);
    } 
    else if(num >= 40){
        printf("XL");
        romano(num - 40);
    } 
    else if(num >= 10){
        printf("X");
        romano(num - 10);
    } 
    else if(num >= 9){
        printf("IX");
        romano(num - 9);
    } 
    else if(num >= 5){
        printf("V");
        romano(num - 5);
    } 
    else if(num >= 4){
        printf("IV");
        romano(num - 4);
    } 
    else if(num >= 1){
        printf("I");
        romano(num - 1);
    }
}

int main(){

    int N;

    scanf("%d", &N);

    if (N == 0){
        printf("N\n");
    } 
    else{
        romano(N);
        printf("\n");
    }

    return 0;
}