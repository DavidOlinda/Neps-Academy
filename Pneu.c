#include <stdio.h>
int main()
{
    int pressao_motorista, pressao_bomba, calibrado;

    scanf("%d %d", &pressao_motorista, &pressao_bomba);

    calibrado = pressao_motorista - pressao_bomba;

    printf("%d", calibrado);
}