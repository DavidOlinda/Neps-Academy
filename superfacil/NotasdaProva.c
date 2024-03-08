#include <stdio.h>

int main() {
    int nota_br;

    scanf("%d", &nota_br);

    if (nota_br >= 86 && nota_br <= 100) {
        printf("A");
    } else if (nota_br >= 61 && nota_br <= 85) {
        printf("B");
    } else if (nota_br >= 36 && nota_br <= 60) {
        printf("C");
    } else if (nota_br >= 1 && nota_br <= 35) {
        printf("D");
    } else if (nota_br == 0) {
        printf("E");
    }
    else{
        printf("NOTA INVALIDA");
    }
    return 0;
}