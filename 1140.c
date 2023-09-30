#include <stdio.h>
#include <string.h>

int main(){

    char frase[1000];

    while(1){
        fgets(frase, sizeof(frase), stdin);

        if(frase[0] == '*'){
            break;
        }

        char letra1 = frase[0];
        int tautograma = 1;

        for(int i = 1; frase[i] != '\0'; i++){
            if (frase[i - 1] == ' ' && (frase[i] != letra1 && frase[i] != letra1 + 'A' - 'a' && frase[i] != letra1 - 'A' + 'a')) {
                tautograma = 0;
                break;
            }
        }

        printf(tautograma ? "Y\n" : "N\n");
    }

    return 0;
}
