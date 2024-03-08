#include <stdio.h>
#include <string.h>

int main()
{
    char estados[50];
    scanf("%49s", estados);

    if ((strcmp(estados, "para") == 0 || strcmp(estados, "roraima") == 0 || strcmp(estados, "acre") == 0 || strcmp(estados, "amapa") == 0 || strcmp(estados, "amazonas") == 0 || strcmp(estados, "rondonia") == 0 || strcmp(estados, "tocantins") == 0))
    {
        printf("Regiao Norte");
    }
    else
    {
        printf("Outra região");
    }

    return 0;
}
