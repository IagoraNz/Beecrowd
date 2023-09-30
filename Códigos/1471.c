#include <stdio.h>

int main(){

    int N, R;
    
    while(scanf("%d %d", &N, &R) != EOF){
        int returned[R];
        int v[N];
        
        for(int i = 0; i < R; i++){
            scanf("%d", &returned[i]);
        }
        
        for(int i = 0; i < N; i++){
            v[i] = 0;
        }
        
        for(int i = 0; i < R; i++){
            v[returned[i] - 1] = 1;
        }
        
        int primeiro = 1;
        
        for(int i = 0; i < N; i++){
            if(v[i] == 0){
                if(!primeiro){
                    printf(" ");
                }
                printf("%d", i + 1);
                primeiro = 0;
                printf(" ");
            }
        }
        
        if (primeiro) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
