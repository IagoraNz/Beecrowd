#include <stdio.h>

int main(){

    int A;

    while(scanf("%d", &A) != EOF){
        if(A % 6 == 0){
            printf("Y\n");
        } 
        else{
            printf("N\n");
        }
    }
    return 0;
}
