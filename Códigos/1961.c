#include <stdio.h>

#define t 100

int main() {

    int p, n, i, n1[t];

    scanf("%d %d", &p, &n);

    if(p > 5 && n > 10){
        printf("Invalido\n");
    }

    for(i = 0; i < n; i++){
        scanf("%d", &n1[i]);
    }

    for(i = 0; i < n - 1; i++){
        if((n1[i + 1] - n1[i]) > p){
            printf("YOU LOSE\n");
        } 
        else{
            printf("YOU WIN\n");
        }
    }

    return 0;
}
