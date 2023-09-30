#include <stdio.h>

int main(){

    int h1, m1, h2, m2, t1, t2, t3, t4;

    do{

        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
            break;
        }

        t1 = h1 * 60 + m1;
        t2 = h2 * 60 + m2;

        if(t1 == t2){
            printf("1440\n");
        }
        else if(t1 < t2){
            printf("%d\n", t2 - t1);
        }
        else{
            t3 = 1440 - t1;
            t4 = t3 + t2;
            printf("%d\n", t4);
        }
    }while(1);

    return 0;
}