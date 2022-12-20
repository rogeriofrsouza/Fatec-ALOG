#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() 
{
    setlocale(LC_ALL, "");
    int idade, habilitacao;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    
    printf("Possui habilitação?\n");
    printf("0 - não possui\n1 - possui\n");
    printf("Informe a sua situação: ");
    scanf("%d", &habilitacao);

    if (idade >= 18 && habilitacao == 1)
        printf("Voce pode dirigir o veículo.\n");
    else
        printf("Voce não pode dirigir o veículo.\n");
    
    system("pause");
}
