#include <stdio.h>

int main(){

    int N;

    scanf("%d", &N);

    while(N--){

        int x, y;

        scanf("%d %d", &x, &y);

        int r_result = (3 * x) * (3 * x) + y * y;
        int b_result = 2 * (x * x) + (5 * y) * (5 * y);
        int c_result = -100 * x + y * y * y;

        if(r_result > b_result && r_result > c_result){
            printf("Rafael ganhou\n");
        } 
        else if(b_result > r_result && b_result > c_result){
            printf("Beto ganhou\n");
        } 
        else{
            printf("Carlos ganhou\n");
        }
    }

    return 0;
}
