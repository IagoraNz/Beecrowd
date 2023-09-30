#include <stdio.h>

char base32[] = "0123456789ABCDEFGHIJKLMNOPQRSTUV";

void decimalToBase32(unsigned long long n) {
    char result[100];
    int i = 0;

    if (n == 0) {
        printf("0\n");
        return;
    }

    while (n > 0) {
        result[i++] = base32[n % 32];
        n /= 32;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", result[j]);
    }
    printf("\n");
}

int main() {
    unsigned long long n;

    while (1) {
        scanf("%llu", &n);

        if (n == 0) {
            break;
        }

        decimalToBase32(n);
    }

    return 0;
}
