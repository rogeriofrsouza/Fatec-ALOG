#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int cont1, cont2;

    cont1 = 1;
    cont2 = 0;
    do
    {
        printf("--------------------------\n");
        printf("Tabuada do número: %d\n", cont1);
        printf("--------------------------\n");

        do
        {
            printf("%d x %d = %d\n", cont1, cont2, cont1 * cont2);
            cont2 = cont2 + 1;
        } while (cont2 <= 10);

        cont2 = 0;
        cont1 = cont1 + 1;
    } while (cont1 <= 5);

    printf("\n");
    printf("Fim da tabuada!\n");

    return 0;
}
