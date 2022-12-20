#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int contador;

    contador = 1;
    while (contador <= 10)
    {
        printf("O dobro do número %d = %d\n", contador, contador * 2);
        contador = contador + 1;
    }
    
    printf("\nFim da operação.\n");

    return 0;
}
