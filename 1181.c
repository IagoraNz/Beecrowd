#include <stdio.h>

int main(){

    int l, i, j;
    char t;
    double m[12][12];
    double r = 0.0;
    
    scanf("%d", &l);
    scanf(" %c", &t);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }

    switch (t)
    {
    case 'S':
        for(j = 0; j < 12; j++){
            r += m[l][j];
        }
        printf("%.1lf\n", r);
        break;
    
    default:
        for(j = 0; j < 12; j++){
            r += m[l][j];
            r /= 12.0;
        }
        printf("%.1lf\n", r);
        break;
    }

    return 0;
}
