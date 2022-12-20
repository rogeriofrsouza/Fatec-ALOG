#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int num_inicial, num_final, salto;
    char opcao;

    for (opcao = 's'; opcao == 's' || opcao == 'S'; opcao)
    {
        printf("Digite o número inicial: ");
        scanf("%d", &num_inicial);
        printf("Digite o número final: ");
        scanf("%d", &num_final);
        printf("Digite o salto: ");
        scanf("%d", &salto);

        if (num_inicial < num_final)
        {
            for (num_inicial; num_inicial <= num_final; num_inicial += salto)
                printf("%d\n", num_inicial);
        }
        else if (num_inicial > num_final)
        {
            for (num_inicial; num_inicial >= num_final; num_inicial -= salto)
                printf("%d\n", num_inicial);
        }
        else
            printf("Erro, tente novamente!\n");

        printf("\nTecle [S] para continuar ou [N] para terminar: ");
        scanf(" %c", &opcao);

        system("cls");
    }

    printf("Terminou a contagem!\n");

    system("pause");
}
