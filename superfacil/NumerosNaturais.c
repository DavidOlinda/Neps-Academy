#include <stdio.h>
int main()
{
    int n, x = 0, soma;
    scanf("%d", &n);

    for (int i = 1; i < n + 1; i++)
    {
       soma = x += i;
    }
    printf("%d",soma);
}