#include <stdio.h>

int main()
{
    int n, cont = 0;
    char gabarito[80];
    char respostas[80];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &gabarito[i]);
    }

    for (int j = 0; j < n; j++)
    {
        scanf(" %c", &respostas[j]);
    }
    for (int i = 0; i < n; i++)
    {
       if (gabarito[i] == respostas[i])
       {
        cont++;
       }
       
    }
   

    printf("%d", cont);

    return 0;
}