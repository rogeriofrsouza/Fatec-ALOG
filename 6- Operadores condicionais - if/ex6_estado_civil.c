#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    char opcao;

    printf("Estado civil\n");
    printf("s - solteiro\nc - casado\nd - divorciado\nv - viúvo\n");
    printf("Escolha uma opção: ");
    scanf("%s", &opcao);

    if (opcao == 's' || opcao == 'S')
        printf("Sua escolha é solteiro");
    else if (opcao == 'c' || opcao == 'C')
        printf("Sua escolha é casado");
    else if (opcao == 'd' || opcao == 'D')
        printf("Sua escolha é divorciado");
    else if (opcao == 'v' || opcao == 'V')
        printf("Sua escolha é viúvo");
    else
        printf("Opção inválida");
    
    system("pause");
}
