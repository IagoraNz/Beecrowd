#include <stdio.h>
#include <string.h>

int main(){

    int N;

    do{
        scanf("%d", &N);
        if (N == 0) {
            break;
        }

        getchar();

        char lines[N][52];
        int max_length = 0;


        for(int i = 0; i < N; i++){
            
            fgets(lines[i], sizeof(lines[i]), stdin);

            int length = strlen(lines[i]) - 1;
            if(lines[i][length - 1] == ' '){
                lines[i][length - 1] = '\0';
                length--;
            }
            if (length > max_length) {
                max_length = length;
            }
        }

        for(int i = 0; i < N; i++){
            int length = strlen(lines[i]);
            int spaces = max_length - length;
            for (int j = 0; j < spaces; j++) {
                putchar(' ');
            }
            printf("%s\n", lines[i]);
        }

        printf("\n");
    }while(1);

    return 0;
}
