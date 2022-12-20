#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num_inicial, num_final;

    printf("Digite o número inicial da contagem: ");
    scanf("%d", &num_inicial);
    printf("Digite o número final da contagem: ");
    scanf("%d", &num_final);

    for (num_inicial; num_inicial <= num_final; num_inicial = num_inicial + 1)
        printf("%d\n", num_inicial);

    printf("\nTerminou a contagem!\n");

    return 0;
}
