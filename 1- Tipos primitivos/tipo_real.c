#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "");
    float num;

    printf("Digite um número real: ");
    scanf("%f", &num);

    printf("O número digitado foi %.2f\n", num);
    
    system("pause");
}
