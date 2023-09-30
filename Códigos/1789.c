#include <stdio.h>

int main(){
    
    int L, v1, maxV;

    while(scanf("%d", &L) != EOF){

        maxV = 0;

        for(int i = 0; i < L; i++){
            scanf("%d", &v1);

            if(v1 > maxV){
                maxV = v1;
            }
        }

        if(maxV < 10){
            printf("1\n");
        } 
        else if(maxV < 20){
            printf("2\n");
        } 
        else{
            printf("3\n");
        }
    }

    return 0;
}
