#include <stdio.h>

int main()
{
    int numero;
    int i=1;
	while (i==1){
	    printf("Dame un número\n");
	    scanf("%d\n", &numero);
	    if (numero < 0){
	        printf("Se acabó el juego\n");
	        break;
	    }
	}
    return 0;
}
