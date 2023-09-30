#include <stdio.h>

int main(){

    int A, B;

    while(1){
        
        scanf("%d %d", &A, &B);

        if(A == 0 && B == 0){
            break;
        }

        int count[10] = {0};

        for(int n = A; n <= B; n++){

            int temp = n;

            while (temp > 0){
                int digit = temp % 10;
                count[digit]++;
                temp /= 10;
            }
        }

        for(int i = 0; i < 10; i++){
            printf("%d ", count[i]);
        }
        printf("\n");
    }

    return 0;
}
