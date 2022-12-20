#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int opcao;

    opcao = 1;
    while (opcao >= 1)
    {
        printf("1 - Saldo conta corrente\n");
        printf("2 - Saldo poupança\n");
        printf("0 - Sair do programa\n");
        printf("Digite uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1)
            printf("Conta corrente = R$1000\n");
        else if (opcao == 2)
            printf("Poupança = R$5000\n");
        else if (opcao == 0)
            printf("\nVocê terminou o programa!\n");
        else
            printf("\nErro, tente novamente!\n");

        printf("\n");
    }

    return 0;
}
