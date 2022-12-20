#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float num1, num2, soma;
    char opcao;

    opcao = 's';
    while (opcao == 's' || opcao == 'S')
    {
        printf("Digite um número: ");
        scanf("%f", &num1);
        printf("Digite outro número: ");
        scanf("%f", &num2);

        soma = num1 + num2;
        printf("A soma de %.1f + %.1f = %.1f\n\n", num1, num2, soma);

        printf("Deseja continuar a soma com outros números?\n");
        printf("Tecle [S] para continuar ou [N] para terminar: ");
        scanf(" %c", &opcao);
        printf("\n");
    }

    printf("Fim do programa!\n");

    return 0;
}
