#include <stdio.h>
#include <string.h>

int main(){

    int qt, n[2], esc[2];
    char j[2][50];

    printf("Digite o numero de casos: ");
    scanf("%d", &qt);

    while(qt--){
        for(int i = 0; i < 2; i++){
            printf("\nJogador %d: ", i + 1);
            scanf("%s", j[i]);

            printf("1 para Par e 2 para Impar: ");
            scanf("%d", &esc[i]);

            printf("Digite um numero: ");
            scanf("%d", &n[i]);
        }

        int soma = n[0] + n[1];

        if(soma % 2 == 0){
            if(esc[0] == 1){
                printf("\n%s ganhou!", j[0]);
            }
            else{
                printf("\n%s ganhou!", j[1]);
            }
        }
        else{
            if(esc[0] == 1){
                printf("\n%s ganhou!", j[0]);
            }
            else{
                printf("\n%s ganhou!", j[1]);
            }
        }
    }

    return 0;
}