#include <stdio.h>

int main()
{
    int cont, soma;
    soma = 0;

    for (cont = 1; cont <= 10; cont += 1)
        soma = soma + cont;

    printf("O resultado da soma de 1 a 10 = %d\n", soma);

    return 0;
}
