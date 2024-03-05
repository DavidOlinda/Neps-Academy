#include <stdio.h>
int main()
{
    int link1, link2, link3, total;
    scanf("%d", &link3);

    link2 = (link3 * 2);
    link1 = (link2 / 2);

    total = link1 + link2 + link3;

    printf("%d", total);
}