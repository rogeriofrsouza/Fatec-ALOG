#include <stdio.h>

int main()
{
    int cont;

    cont = 0;
    while (cont <= 10)
    {
        printf("%d\n", cont);
        cont += 2;
    }

    printf("\nTerminou a contagem!\n");

    return 0;
}
