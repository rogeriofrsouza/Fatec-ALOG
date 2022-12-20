#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");

    int r;
    const double PI = 3.14159;
    double c;

    printf("Digite um número para o raio: ");
    scanf("%d", &r);

    c = 2 * PI * r;
    printf("O comprimento da circunferência = %f\n", c);
    
    system("pause");
}
