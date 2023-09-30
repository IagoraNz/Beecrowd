#include <stdio.h>

int escada(int N){

    const int MOD = 1000000007;

    if(N <= 2){
        return N;
    }
    if(N == 3){
        return 4;
    }

    long long dp[N + 1];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 4; i <= N; i++){
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    return dp[N];
}

int main(){

    int N;

    scanf("%d", &N);

    int resultado = escada(N);
    printf("%d\n", resultado);

    return 0;
}
