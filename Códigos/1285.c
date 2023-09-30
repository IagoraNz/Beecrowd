#include <stdio.h>

int temDigitosRepetidos(int n) {
    int digitos[10] = {0};

    while(n > 0){

        int digito = n % 10;
        if(digitos[digito] > 0){
            return 1;
        }
        digitos[digito]++;
        n /= 10;
    }

    return 0;
}

int main(){

    int N, M;

    while(scanf("%d %d", &N, &M) != EOF){

        int contador = 0;
        for(int i = N; i <= M; i++){
            if(!temDigitosRepetidos(i)){
                contador++;
            }
        }
        printf("%d\n", contador);
    }

    return 0;
}
