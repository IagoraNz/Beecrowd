#include <stdio.h>
#include <string.h>

int main(){

    char acm[6];

    while(1){
        scanf("%s", acm);
        
        if(strcmp(acm, "0") == 0)
            break;

        int len = strlen(acm);
        int decimal = 0;
        
        for(int i = 0; i < len; i++){

            int digit = acm[i] - '0';
            int factorial = 1;
            
            for(int j = 1; j <= len - i; j++){
                factorial *= j;
            }
            
            decimal += digit * factorial;
        }

        printf("%d\n", decimal);
    }

    return 0;
}
