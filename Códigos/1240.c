#include <stdio.h>

int main(){

    int N;
    
    scanf("%d", &N);

    while (N--){
        unsigned int A, B;
        scanf("%u %u", &A, &B);

        if(A % 10 == B % 10){
            printf("encaixa\n");
        }
        else{
            printf("nao encaixa\n");
        }
    }

    return 0;
}
