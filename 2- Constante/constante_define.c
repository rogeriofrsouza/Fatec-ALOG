#include <stdio.h>
#include <locale.h>

#define PI 3.14159

int main()
{
    setlocale(LC_ALL, "");
    double c, r;

    r = 5;
    c = 2 * PI * r;
    printf("O comprimento da circunferência = %f\n", c);

    return 0;
}
