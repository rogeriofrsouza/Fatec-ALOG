#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float num1, num2, soma;
    char opcao;

    do
    {
        printf("Digite um número: ");
        scanf("%f", &num1);
        printf("Digite outro número: ");
        scanf("%f", &num2);

        soma = num1 + num2;
        printf("\nA soma de %0.1f + %0.1f = %0.1f\n\n", num1, num2, soma);

        printf("Deseja continuar o cálculo da soma de outros números?");
        printf("Digite [S] para continuar ou [N] para terminar: ");
        scanf(" %c", &opcao);
        
        printf("\n");
    } while (opcao == 's' || opcao == 'S');

    if (opcao == 'n' || opcao == 'N')
        printf("O programa terminou!\n");
    else
        printf("Erro, tente novamente!\n");

    return 0;
}
