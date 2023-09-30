#include <stdio.h>

int main(){

    int n, i, k, j, b, a = 0;

    while(1){
        scanf("%d", &n);

        if(n == 0){
            break;
        }

        int alunos[n];

        for(i = 0; i < n; i++){
            scanf("%d", &alunos[i]);
        }

        scanf("%d", &k);

        b = k;
        
        while(1){
            if(alunos[b-1] == b){
                printf("%d\n", b);
                break;
            }
            b = alunos[b-1];
        }
    }

    return 0;
}