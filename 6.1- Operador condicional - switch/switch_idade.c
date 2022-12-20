#include <stdio.h>
#include <locale.h>

#define MAIORIDADE 18

int main()
{
    setlocale(LC_ALL, "");
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    switch (idade >= 18)
    {
        case 1:
            printf("\n Você possui %d anos e é maior de idade.\n", idade);
            break;
        default:
            printf("\n Você possui %d anos e é menor de idade.\n", idade);
    }

    return 0;
}
