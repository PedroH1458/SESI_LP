#include <stdio.h>

int main() {
    float cm, metros;

    printf("Digite o valor em centímetros: ");
    scanf("%f", &cm);

    metros = cm / 100.0;

    printf("%.2f cm equivalem a %.2f metros\n", cm, metros);
    return 0;
}
