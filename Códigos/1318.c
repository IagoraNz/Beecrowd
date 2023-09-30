#include <stdio.h>

int main(){

    int N, M;
    
    while(scanf("%d %d", &N, &M) == 2 && (N != 0 || M != 0)){

        int b[10001] = {0};
        int count = 0;

        for (int i = 0; i < M; i++) {
            int t;
            scanf("%d", &t);

            if(b[t] == 1){
                count++;
                b[t] = -1;
            } 
            else if(b[t] == 0){
                b[t] = 1;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}
