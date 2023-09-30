#include <stdio.h>

int main(){

    int n;

    while(scanf("%d", &n) != EOF){
        int largada[n], chegada[n];

        for(int i = 0; i < n; i++){
            scanf("%d", &largada[i]);
        }

        for(int i = 0; i < n; i++){
            scanf("%d", &chegada[i]);
        }
        
        int ultrapassagens = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(largada[i] != chegada[i]){
                    int temp = largada[i];
                    largada[i] = largada[j];
                    largada[j] = temp;
                    ultrapassagens++;
                }
            }
        }
        
        printf("%d\n", ultrapassagens);
    }
    return 0;
}
