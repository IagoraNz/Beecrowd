#include <stdio.h>

int main(){

    int N, M;
    
    scanf("%d %d", &N, &M);

    int jogadores[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &jogadores[i][j]);
        }
    }

    int gol = 0;

  
    for (int i = 0; i < N; i++) {
        int gols = 1;
        for (int j = 0; j < M; j++) {
            if (jogadores[i][j] == 0) {
                gols = 0;
                break;
            }
        }
        if (gols) {
            gol++;
        }
    }

    printf("%d\n", gol);

    return 0;
}
