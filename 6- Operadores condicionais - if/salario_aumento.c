#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "");
    float salario, resultado;

    printf("Digite o salário: R$");
    scanf("%f", &salario);

    resultado = salario >= 1000 ? salario + (salario * 0.10) : salario + (salario * 0.05);
    printf("O novo salário = R$%.2f\n", resultado);

    return 0;
}
