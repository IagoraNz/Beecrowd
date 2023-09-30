#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

char formarTriangulo(int a, int b, int c, int d) {
    int comprimentos[4] = {a, b, c, d};

    qsort(comprimentos, 4, sizeof(int), comparar);

    if (comprimentos[0] + comprimentos[1] + comprimentos[2] > comprimentos[3]){
        return 'S';
    }
    else{
        return 'N';
    }
}

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    char resultado = formarTriangulo(a, b, c, d);

    printf("%c\n", resultado);
    
    return 0;
}
