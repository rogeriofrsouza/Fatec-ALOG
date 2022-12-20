#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int cont1, cont2;

    cont1 = 1;
    cont2 = 0;
    while (cont1 <= 5)
    {
        printf("---------------------------\n");
        printf("Tabuada do número: %d\n", cont1);
        printf("---------------------------\n");

        while (cont2 <= 10)
        {
            printf("%d x %d = %d\n", cont1, cont2, cont1 * cont2);
            cont2 = cont2 + 1;
        }
        cont2 = 0;
        cont1 = cont1 + 1;
    }
    printf("\n");

    printf("Fim da tabuada!\n");

    return 0;
}
