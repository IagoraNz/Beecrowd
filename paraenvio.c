#include <stdio.h>
#include <string.h>

int main(){
    int QT;
    scanf("%d", &QT);
    
    while(QT--){
        char jogador1[105], escolha1[6], jogador2[105], escolha2[6];
        int N, M;
        
        scanf("%s %s %s %s", jogador1, escolha1, jogador2, escolha2);
        scanf("%d %d", &N, &M);
        
        int soma = N + M;
        
        int par = soma % 2 == 0;
        
        if((strcmp(escolha1, "PAR") == 0 && par) || (strcmp(escolha1, "IMPAR") == 0 && !par)){
            printf("%s\n", jogador1);
        } 
        else{
            printf("%s\n", jogador2);
        }
    }
    
    return 0;
}
