#include <stdio.h>

int main(){

    int C;

    scanf("%d", &C);

    while(C--){

        int N;

        scanf("%d", &N);

        int notas[N];
        int soma = 0;

        for(int i = 0; i < N; i++){
            scanf("%d", &notas[i]);
            soma += notas[i];
        }

        double media = (double)soma / N;
        int acimamedia = 0;

        for(int i = 0; i < N; i++){
            if(notas[i] > media){
                acimamedia++;
            }
        }

        double percentual = ((double)acimamedia / N) * 100;
        printf("%.3lf%%\n", percentual);
    }

    return 0;
}
