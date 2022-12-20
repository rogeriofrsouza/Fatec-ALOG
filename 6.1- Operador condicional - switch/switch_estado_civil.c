#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char estadoCivil;

    printf("Digite [c] para casado(a)\n");
    printf("Digite [s] para solteiro(a)\n");
    printf("Digite [d] para divorciado(a)\n");
    printf("Digite [v] para viúvo[a]\n");
    scanf("%c", &estadoCivil);

    switch (estadoCivil)
    {
        case 'C':
        case 'c':
            printf("\n O estado civil selecionado é casado(a)\n");
            break;
        case 'S':
        case 's':
            printf("\n O estado civil selecionado é solteiro(a)\n");
            break;
        case 'D':
        case 'd':
            printf("\n O estado civil selecionado é divorciado(a)\n");
            break;
        case 'V':
        case 'v':
            printf("\n o estado civil selecionado é viúvo(a)\n");
            break;
        default:
            printf("\n Opção inválida\n");
    }

    return 0;
}
