#include <stdio.h>
#include <locale.h>

// Procedimento não retorna valores
// Função retorna valores

// Construção dos protótipos = declarações de procedimentos e funções

void imprimirNome();
void imprimirSobrenome();
void imprimirSoma2Valores(int a, int b);

int main()
{
    setlocale(LC_ALL, "");

    imprimirNome();
    imprimirSobrenome();
    imprimirNome();
    imprimirSobrenome();
    imprimirSoma2Valores(10, 5);

    return 0;
}

void imprimirNome()
{
    printf("Rogério ");
}

void imprimirSobrenome()
{
    printf("Ferreira de Souza\n");
}

void imprimirSoma2Valores(int a, int b)
{
    printf("Soma: %d\n", a + b);
}
