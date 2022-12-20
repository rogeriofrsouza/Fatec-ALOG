#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int cont1, cont2;

    for (cont1 = 1; cont1 <= 5; cont1++)
    {
        printf("-------------------------------\n");
        printf("Tabuada do número: %d\n", cont1);
        printf("-------------------------------\n");

        for (cont2 = 0; cont2 <= 10; cont2++)
            printf("%d x %d = %d\n", cont1, cont2, cont1 * cont2);
    }
    printf("\n");
    printf("Fim da tabuada!\n");

    return 0;
}
