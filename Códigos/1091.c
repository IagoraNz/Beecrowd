#include <stdio.h>

int main(){

    int K;

    do{
        scanf("%d", &K);

        if(K == 0){
            break;
        }

        int N, M;
        scanf("%d %d", &N, &M);

        while(K--){
            int X, Y;

            scanf("%d %d", &X, &Y);

            if(X == N || Y == M){
                printf("divisa\n");
            } 
            else if(X > N && Y > M){
                printf("NE\n");
            } 
            else if(X < N && Y > M){
                printf("NO\n");
            }
            else if(X > N && Y < M){
                printf("SE\n");
            }
            else{
                printf("SO\n");
            }
        }
    }while(1);

    return 0;
}
