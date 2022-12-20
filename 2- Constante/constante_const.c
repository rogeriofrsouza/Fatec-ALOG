#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    const double PI = 3.14159;
    double c, r;

    r = 5;
    c = 2 * PI * r;
    printf("O comprimento da circunferência = %f\n", c);

    return 0;
}
