#include <stdio.h>

int main(){

    int n;

    while(scanf("%d", &n) != EOF){

        int resto = 1 % n;

        int digitos = 1;

        while(resto != 0){
            resto = (resto * 10 + 1) % n;
            digitos++;
        }

        printf("%d\n", digitos);
    }

    return 0;
}
