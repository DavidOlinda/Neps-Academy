#include <stdio.h>
int main()
{
    int curupira, boitata, boto, mapinguari, iara, total, c, b, m, i, bo, chica;

    scanf("%d %d %d %d %d", &c, &b, &bo, &m, &i);
    curupira = 300;
    boitata = 1500;
    boto = 600;
    mapinguari = 1000;
    iara = 150;
    chica = 225;
    total = chica + (curupira * c) + (boitata * b) + (boto * bo) + (mapinguari * m) + (iara * i);

    printf("%d\n", total);
}