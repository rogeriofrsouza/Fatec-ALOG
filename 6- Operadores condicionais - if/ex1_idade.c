#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() 
{
    setlocale(LC_ALL, "");
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
        printf("Você possui %d anos e é maior de idade\n", idade);
    else
        printf("Você possui %d anos e é menor de idade\n", idade);
    
    system("pause");
}
