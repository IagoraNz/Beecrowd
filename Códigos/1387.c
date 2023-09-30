#include <stdio.h>
 
int main(){

    int l, r;
    
    do{
        scanf("%d %d", &l, &r);

        if(l == 0 && r == 0){
            break;
        }
        else{
            int soma;
            soma = l + r;

            printf("%d\n", soma);
        }
    }while(1);
 
    return 0;
}