#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float valor, valor_final;
    int pagamento;

    printf("Informe o valor do produto: R$");
    scanf("%f", &valor);

    printf("Forma de pagamento\n");
    printf("1 - À vista \n2 - À prazo\n");
    printf("Escolha o pagamento [1/2]: ");
    scanf("%d", &pagamento);

    switch (pagamento)
    {
        case 1:
            valor_final = valor * 0.9;
            printf("\nO total a pagar à vista = R$ %.2f\n", valor_final);
            break;
        case 2:
            printf("\nO total a pagar à prazo = R$ %.2f\n", valor);
            break;
        default:
            printf("Opção inválida, tente novamente.");
    }

    return 0;
}
