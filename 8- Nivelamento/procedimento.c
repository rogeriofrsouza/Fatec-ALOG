#include <stdio.h>
#include <locale.h>

// Procedimento não retorna valores
// Função retorna valores

// Construção dos protótipos = declarações de procedimentos e funções

void nome()
{
    printf("Rogério ");
}

void sobrenome()
{
    printf("Ferreira de Souza\n");
}

int main()
{
    setlocale(LC_ALL, "");

    nome();
    sobrenome();
    nome();
    sobrenome();
}
