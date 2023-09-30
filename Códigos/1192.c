#include <stdio.h>
#include <ctype.h>

int main(){

    int n, a, c;
    char b;

    scanf("%d", &n);

    while(n--){
        scanf("%d%c%d", &a, &b, &c);

        if(a > 9 && c > 9){
            break;
        }

        if(c == a){
            printf("%d\n", c * a);
        }
        else if(isupper(b)){
            printf("%d\n", c - a);
        }
        else if(islower(b)){
            printf("%d\n", c + a);
        }
        else{
            printf("Invalido!\n");
        }
    }

    return 0;
}