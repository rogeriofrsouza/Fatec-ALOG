#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() 
{
    setlocale(LC_ALL, "");
    float valor, valor_final;
    int pag;

    printf("Informe o valor do produto: R$");
    scanf("%f", &valor);
    
    printf("Forma de pagamento\n");
    printf("1 - À vista\n2 - À prazo\n");
    printf("Escolha o pagamento: ");
    scanf("%d", &pag);

    if (pag == 1) 
    {
        valor_final = valor - (valor * 0.10);
        printf("O total a pagar à vista = R$%.2f\n", valor_final);
    }
    else if (pag == 2)
        printf("O total a pagar à prazo = R$%.2f\n", valor);
    else
        printf("Erro. Por favor, reinicie o programa.");
    
    system("pause");
}
