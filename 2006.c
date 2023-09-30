#include <stdio.h>

int main(){

    int T; 

    scanf("%d", &T);

    int respostas[5]; 

    for(int i = 0; i < 5; i++){
        scanf("%d", &respostas[i]);
    }

    int corretas = 0; 

    for(int i = 0; i < 5; i++){
        if(respostas[i] == T){
            corretas++;
        }
    }

    printf("%d\n", corretas);

    return 0;
}
