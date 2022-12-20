#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int cont;

    for (cont = 1; cont <= 10; cont++)
        printf("O dobro do número %d = %d\n", cont, cont * 2);

    return 0;
}
