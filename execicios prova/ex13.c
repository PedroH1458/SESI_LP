#include <stdio.h>

int main() {
    int valor, contagem = 0;
    long long soma = 0;

    while (contagem < 10) {
        scanf("%d", &valor);
        if (valor > 0) {
            soma += valor;
            contagem++;
        }
    }

    printf("Media: %.2f\n", (double)soma / 10);
    return 0;
}
