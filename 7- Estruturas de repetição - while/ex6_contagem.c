#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num_inicial, num_final, salto;
    char opcao;

    opcao = 's';
    while (opcao == 's' || opcao == 'S')
    {
        printf("Digite o número inicial: ");
        scanf("%d", &num_inicial);
        printf("Digite o número final: ");
        scanf("%d", &num_final);
        printf("Digite o salto: ");
        scanf("%d", &salto);

        while (num_inicial <= num_final)
        {
            printf("%d\n", num_inicial);
            num_inicial = num_inicial + salto;
        }

        printf("\nTecle [S] para continuar ou [N] para terminar: ");
        scanf(" %c", &opcao);
        printf("\n");
    }

    printf("\nTerminou a contagem!");

    return 0;
}
