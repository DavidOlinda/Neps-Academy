#include <stdio.h>

int main()
{
    int a, b, c, soma;

    scanf("%d %d %d", &a, &b, &c);
    soma = a + b;
    if (soma == c)
    {
        printf("correct!");
    }
    else
    {
        printf("wrong!");
    }
}