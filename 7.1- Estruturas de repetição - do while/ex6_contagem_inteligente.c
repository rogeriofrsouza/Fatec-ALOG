#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num_inicial, num_final, salto;
    char opcao;

    do
    {
        printf("Digite o número inicial: ");
        scanf("%d", &num_inicial);
        printf("Digite o número final: ");
        scanf("%d", &num_final);
        printf("Digite o salto: ");
        scanf("%d", &salto);

        if (num_inicial < num_final)
        {
            do
            {
                printf("%d\n", num_inicial);
                num_inicial = num_inicial + salto;
            } while (num_inicial <= num_final);
        }
        else if (num_inicial > num_final)
        {
            do
            {
                printf("%d\n", num_inicial);
                num_inicial = num_inicial - salto;
            } while (num_inicial >= num_final);
        }
        else
            printf("Erro, tente novamente.");

        printf("\nTecle [s] para continuar ou [n] para terminar: ");
        scanf(" %c", &opcao);

        printf("\n");
    } while (opcao == 'S' || opcao == 's');

    printf("\nTerminou a contagem!\n");

    return 0;
}
