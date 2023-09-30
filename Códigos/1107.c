#include <stdio.h>

int main()
{
    int altura, comp, i;

    do{
        int laser = 0; // Rapaz, isso só está aqui porque inicializando antes do do-while deu errado

        scanf("%d %d", &altura, &comp);// Altura e comprimento
        int altb[comp];// Altura dos blocos com limite do comprimento

        if(altura == 0 && comp == 0){//Se altura e comprimento forem zero, encerra a aplicação
            break;
        }

        for(i = 0; i < comp; i++){//Leitura das alturas dos blocos enquanto for menor que o comprimento
            scanf("%d", &altb[i]);//Armazena no vetor
        }

        for(i = 0; i < comp; i++){//Hora do laser verificar os blocos
            if(i == 0){//Se for o primeiro bloco
                if(altura > altb[i]){//Se a altura do muro for maior que a altura do bloco
                    laser += (altura - altb[i]);//Laser é igual a altura do muro menos a altura do bloco
                }
            }
            else{//Se não for o primeiro bloco
                if(altb[i - 1] > altb[i]){//Se a altura do bloco anterior for maior que a altura do bloco
                    laser += (altb[i - 1] - altb[i]);//Laser é igual a altura do bloco anterior menos a altura do bloco
                }
            }
        }

        printf("%d\n", laser);
    }while(1);

    return 0;
}