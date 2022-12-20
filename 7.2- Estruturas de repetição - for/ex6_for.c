#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int opcao;

    for (opcao = 1; opcao >= 1; opcao)
    {
        printf("1 - Saldo conta corrente\n");
        printf("2 - Saldo poupança\n");
        printf("0 - Sair do programa\n");
        printf("Digite uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("Conta corrente = R$1000\n");
                break;
            case 2:
                printf("Poupança = R$5000\n");
                break;
            case 0:
                printf("\nVocê terminou o programa!\n");
                break;
            default:
                printf("\nErro, tente novamente!\n");
        }
        printf("\n");
    }

    return 0;
}
