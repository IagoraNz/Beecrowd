#include <stdio.h>

int main(){

    int q, i, y = 0, n = 0;

    scanf("%d", &q);

    int v[q];

    for(i = 0; i < q; i++){
        scanf("%d", &v[i]);
    }
    for(i = 0; i < q; i++){
        if(v[i] == 1){
            n++;
        }
        else{
            y++;
        }
    }

    if(y == n){
        printf("N");
    }
    else if(y > n){
        printf("Y");
    }
    else{
        printf("N");
    }

    return 0;
}