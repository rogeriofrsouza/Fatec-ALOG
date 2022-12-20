#include <stdio.h>

int main()
{
    int contador;

    for (contador = 0; contador <= 10; contador = contador + 2)
        printf("%d\n", contador);

    printf("\nTerminou a contagem!\n");

    return 0;
}
