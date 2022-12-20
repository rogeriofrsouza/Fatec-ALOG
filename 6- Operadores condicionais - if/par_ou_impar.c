#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d é par!\n", n);
    else
        printf("%d é ímpar!\n", n);

    // n % 2 == 0 ? printf("%d é par!\n", n) : printf("%d é ímpar!\n", n);
    
    system("pause");
}
