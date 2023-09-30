#include <stdio.h>

int main(){
    
    int n;

    while(1){
        
        scanf("%d", &n);
        
        if(n == 0){
            break;
        }

        int mary = 0;
        int john = 0;

        for(int i = 0; i < n; i++){
            int r;

            scanf("%d", &r);

            if(r == 0){
                mary++;
            }
            else{
                john++;
            }
        }

        printf("Mary won %d times and John won %d times\n", mary, john);
    }

    return 0;
}
