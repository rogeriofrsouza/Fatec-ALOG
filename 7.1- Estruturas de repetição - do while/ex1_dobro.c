#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int cont;

    cont = 1;
    do
    {
        printf("O dobro do número %d = %d\n", cont, cont * 2);
        cont++;
    } while (cont <= 10);

    return 0;
}
