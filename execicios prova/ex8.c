#include <stdio.h>

int main() {
    float antigo, novo;
    scanf("%f", &antigo);

    novo = antigo * (antigo <= 50 ? 1.05 : antigo <= 100 ? 1.10 : 1.15);
    printf("Novo: %.2f\n", novo);

    puts(novo <= 80 ? "Barato" : novo <= 120 ? "Normal" : "Caro");
    return 0;
}
