#include <stdio.h>
#include <locale.h>

// Procedimento não retorna valores
// Função retorna valores

// Construção dos protótipos = declarações de procedimentos e funções

void imprimirNome();
void imprimirSobrenome();
void imprimirSoma2Valores(int a, int b);
int retornarSoma2Valores(int valor1, int valor2);

int main()
{
    setlocale(LC_ALL, "");
    int n1 = 30, n2 = 50, resultado;

    imprimirNome();
    imprimirSobrenome();

    imprimirSoma2Valores(10, 5);
    resultado = retornarSoma2Valores (n1, n2);
    
    printf("Resultado: %d\n", resultado);

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

int retornarSoma2Valores(int valor1, int valor2)
{
    return valor1 + valor2;
}
