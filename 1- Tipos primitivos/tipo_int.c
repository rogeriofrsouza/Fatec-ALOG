#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("O número digitado foi %d", num);
    
    system("pause");
}
