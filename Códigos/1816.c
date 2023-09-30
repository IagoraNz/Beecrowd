#include <stdio.h>

#define tam 1000

int main(){

    int m[tam];

    scanf("%d", &m);

    for(int i = 0; i < m; i++){
        scanf("%d", &m[i]);

        if(m == 0){
            break;
        }
    }
    for(int i = 0; i < m; i++){
        if(m[i] == 1){
            printf("A");
        }
    }

    return 0;
}