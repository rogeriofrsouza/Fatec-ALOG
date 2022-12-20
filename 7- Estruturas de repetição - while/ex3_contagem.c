#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num_inicial, num_final;

    printf("Digite o número inicial da contagem: ");
    scanf("%d", &num_inicial);
    printf("Digite o número final da contagem: ");
    scanf("%d", &num_final);

    while (num_inicial <= num_final)
    {
        printf("%d\n", num_inicial);
        num_inicial++;
    }

    printf("\nTerminou a contagem!");

    return 0;
}
