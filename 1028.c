#include <stdio.h>

int calcularMDC(int a, int b) {
    if (b == 0) {
        return a;
    }
    return calcularMDC(b, a % b);
}

int main(){

    int N;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){

        int F1, F2;
        
        scanf("%d %d", &F1, &F2);

        int mdc = calcularMDC(F1, F2);
        printf("%d\n", mdc);
    }

    return 0;
}
