#include <stdio.h>

int main(){

    int n, i, menor, posicao;

    while(1){

        scanf("%d", &n);
        
        if(n == 0){
            break;
        }
        char planeta[n][50];
        int ano[n], tempo[n];

        for(i = 0; i < n; i++){
            scanf("%s %d %d", planeta[i], &ano[i], &tempo[i]);
        }

        menor = ano[0] - tempo[0];
        posicao = 0;

        for(i = 1; i < n; i++){
            if((ano[i] - tempo[i]) < menor){
                menor = ano[i] - tempo[i];
                posicao = i;
            }
        }

        printf("%s\n", planeta[posicao]);
    }

    return 0;
}