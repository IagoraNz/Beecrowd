#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int white, black;

    if (n % 2 == 0) {
        white = black = (n / 2) * n;
    } 
    else {
        white = ((n + 1) / 2) * ((n + 1) / 2) + (n / 2) * (n / 2);
        black = n * n - white;
    }

    printf("%d casas brancas e %d casas pretas\n", white, black);

    return 0;
}
