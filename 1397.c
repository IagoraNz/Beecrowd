#include <stdio.h>

int main(){

    int n, a , b, pA = 0, pB = 0;

    do{
        scanf("%d", &n);

        if(n == 0){
            break;
        }

        for(int i = 0; i < n; i++){
            scanf("%d %d", &a, &b);

            if(a == b){
                continue;
            }
            else if(a > b){
                pA++;
            }
            else{
                pB++;
            }
        }

        printf("%d %d", pA, pB);

    }while(1);

    return 0;
}