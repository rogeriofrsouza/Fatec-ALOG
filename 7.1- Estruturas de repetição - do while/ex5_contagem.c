#include <stdio.h>

int main()
{
    int cont;

    cont = 1;
    do
    {
        printf("%d\n", cont);
        cont = cont + 2;
    } while (cont <= 10);

    printf("\nTerminou a contagem!\n");

    return 0;
}
