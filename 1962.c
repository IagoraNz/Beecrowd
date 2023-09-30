#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    while(n--){
        int t;
        scanf("%d", &t);

        if(t >= 2015){
            t = t - 2015 + 1;
            printf("%d A.C.\n", t);
        } 
        else{
            t = 2015 - t;
            printf("%d D.C.\n", t);
        }
    }

    return 0;
}
