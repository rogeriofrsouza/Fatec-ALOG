#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int quant;
    float total;

    printf("Informe a quantidade de cadeiras que irá comprar: ");
    scanf("%d", &quant);

    if (quant > 0 && quant <= 50)
        total = quant * 45;
    else
        total = quant * 40;

    // total = quant <= 50 ? quant * 45 : quant * 40;

    printf("Total a pagar = R$%.2f\n", total);
    
    system("pause");
}
