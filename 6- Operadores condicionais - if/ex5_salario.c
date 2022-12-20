#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() 
{
    setlocale(LC_ALL, "");
    float salario;
    int tempo, idade;

    printf("Informe o salário: R$");
    scanf("%f", &salario);
    printf("Informe o tempo de serviço (anos): ");
    scanf("%d", &tempo);
    printf("Informe a idade: ");
    scanf("%d", &idade);

    if (salario <= 4000 && idade > 30 && tempo > 3)
        printf("Receberá reajuste.\n");
    else
        printf("Não receberá ajuste.\n");
    
    // salariof = (salario <= 4000 && idade > 30 && tempo > 3) ? printf("Receberá reajuste.\n") : printf("Não receberá ajuste.\n");
    
    system("pause");
}
