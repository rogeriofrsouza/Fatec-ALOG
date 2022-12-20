#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num1, num2;

    printf("Digite o número inicial da contagem: ");
    scanf("%d", &num1);
    printf("Digite o número final da contagem: ");
    scanf("%d", &num2);
    printf("\n");

    do
    {
        printf("%d\n", num1);
        num1 = num1 + 1;
    } while (num1 <= num2);

    printf("\nTerminou a contagem!\n");

    return 0;
}
