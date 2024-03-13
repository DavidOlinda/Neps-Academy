#include <stdio.h>

int main() {
    int n, x[50];

    // Lendo o tamanho do vetor
    scanf("%d", &n);

    // Lendo os elementos do vetor
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    // Bubble Sort para ordenar o vetor
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                // Trocando os elementos
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }

    // Imprimindo os valores em ordem crescente
    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", x[i]);
    }

    return 0;
}