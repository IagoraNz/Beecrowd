#include <stdio.h>
#include <math.h>

int menorRaio(int r1, int r2) {
    return r1 + r2;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int r1, r2;
        scanf("%d %d", &r1, &r2);
        int resultado = menorRaio(r1, r2);
        printf("%d\n", resultado);
    }

    return 0;
}
