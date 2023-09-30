#include <stdio.h>

#define tamanho 2000

int main(){

    int n;

    scanf("%d", &n);

    int valores[tamanho] = {0};

    while(n--){
        int x;
        scanf("%d", &x);
        valores[x]++;
    }

    for(int i = 1; i <= tamanho; i++){
        if (valores[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, valores[i]);
        }
    }

    return 0;
}
