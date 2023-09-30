#include <stdio.h>

long long fatorial(int n){
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main(){

    int M, N;

    while(scanf("%d %d", &M, &N) != EOF){
        long long soma = fatorial(M) + fatorial(N);
        printf("%lld\n", soma);
    }

    return 0;
}
