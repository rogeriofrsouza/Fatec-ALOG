#include <stdio.h>

int main()
{
    int cont, soma = 0;

    cont = 1;
    do
    {
        soma = soma + cont;
        cont = cont + 1;
    } while (cont <= 10);

    printf("O resultado da soma de 1 a 10 = %d\n", soma);

    return 0;
}
