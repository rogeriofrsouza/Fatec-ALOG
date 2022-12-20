#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int op, n1, n2;

    printf("=== MENU ===");
    printf("[1] Soma\n");
    printf("[2] Subtração\n");
    printf("[3] Multiplicação\n");
    printf("[4] Divisão\n");
    printf("Escolha a opção: ");
    scanf("%d", &op);

    printf("Digite os 2 valores: ");
    scanf("%d %d", &n1, &n2);

    switch (op)
    {
        case 1:
            printf("Soma: %d\n", n1 + n2);
            break;
        case 2:
            printf("Subtração: %d\n", n1 - n2);
            break;
        case 3:
            printf("Multiplicação: %d\n", n1 * n2);
            break;
        case 4:
            printf("Divisão: %d\n", (float)n1 / n2);
            break;
        default:
            printf("Opção inválida.");
    }

    return 0;
}
