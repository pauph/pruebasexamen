#include <stdio.h>

int main() {
    
    int v1, v2, v3, temp;
    
    printf("Escribe el 1er valor: ");
    scanf("%d", &v1);
    printf("Escribe el 2do valor: ");
    scanf("%d", &v2);
    printf("Escribe el 3er valor: ");
    scanf("%d", &v3);

    temp = v1;
    v1 = v2;
    v2 = v3;
    v3 = temp;

    printf("\n\nIntercambio de valores\n\n");
    printf("Nuevo valor de v1 = %d\n", v1);
    printf("Nuevo valor de v2 = %d\n", v2);
    printf("Nuevo valor de v3 = %d\n", v3);

    return 0;
}
