#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d", &x);
    int dezenas = x / 10;
    int unidades = x % 10;
    if (dezenas == unidades)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}