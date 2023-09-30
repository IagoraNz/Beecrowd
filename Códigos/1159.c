#include <stdio.h>

int main(){

    int pares[5], impares[5], valor, i, j, cpares = 0, cimpares = 0;

    for(i = 0; i < 15; i++){
        scanf("%d", &valor);

        if(valor % 2 == 0){
            pares[cpares] = valor;
            cpares++;

            if(cpares == 5){
                for (j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, pares[j]);
                }
                cpares = 0;
            }
        } 
        else{
            impares[cimpares] = valor;
            cimpares++;

            if(cimpares == 5){
                for (j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, impares[j]);
                }
                cimpares = 0;
            }
        }
    }

    for(i = 0; i < cimpares; i++){
        printf("impar[%d] = %d\n", i, impares[i]);
    }

    for(i = 0; i < cpares; i++){
        printf("par[%d] = %d\n", i, pares[i]);
    }

    return 0;
}
