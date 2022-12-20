#include <stdio.h>

int main()
{
    int cont;

    cont = 1;
    while (cont <= 10)
    {
        printf("%d\n", cont);
        cont = cont + 2;
    }

    printf("\nTerminou a contagem!\n");

    return 0;
}
