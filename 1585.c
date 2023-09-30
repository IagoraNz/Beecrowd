#include <stdio.h>

int main(){

    int N;

    scanf("%d", &N);

    while(N--){
        int x, y;
        scanf("%d %d", &x, &y);

        int area = (x * y) / 2;
        printf("%d cm2\n", area);
    }

    return 0;
}
