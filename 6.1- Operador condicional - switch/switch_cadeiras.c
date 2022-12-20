#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int cadeiras;
    float total;

    printf("Informe o número de cadeiras que irá comprar: ");
    scanf("%d", &cadeiras);

    switch (cadeiras <= 50)
    {
        case 1:
            total = cadeiras * 45;
            break;
        default:
            total = cadeiras * 40;
    }
    printf("\nO total a pagar = R$%.2f\n", total);

    return 0;
}
