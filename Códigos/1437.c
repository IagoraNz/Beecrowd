#include <stdio.h>

int main(){

    int n;
    char d;
    char direcao[4] = {'N', 'L', 'S', 'O'};

    while(scanf("%d", &n) && n != 0){

        int posicao = 0;

        for(int i = 0; i < n; i++){
            scanf(" %c", &d);
            if(d == 'D'){
                posicao++;
            }else{
                posicao--;
            }
        }
        if(posicao < 0){
            posicao = 4 + posicao;
        }
        printf("%c\n", direcao[posicao % 4]);
    }

    return 0;
}