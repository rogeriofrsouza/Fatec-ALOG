#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "");
    bool v, f;

    v = true;
    f = false;

    printf("O melhor time do Brasil é o Palmeiras? %d\n", f);
    printf("2 + 2 = 4? %d\n", v);
    
    system("pause");
}
