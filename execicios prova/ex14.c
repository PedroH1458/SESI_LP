#include <stdio.h>

int main() {
    int numero;
    int contagem = 0;
    long long soma = 0;

    printf("Digite numeros inteiros. Serão coletados 10 numeros POSITIVOS (maiores que 0).\n");
    printf("Numeros negativos ou zero serao ignorados.\n\n");

    while (contagem < 10) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > 0) {
            contagem++;
            soma += numero;
            printf("  -> Aceito! [%d/10]\n", contagem);
        } else {
            printf("  -> Ignorado (deve ser positivo).\n");
        }
    }

    double media = (double)soma / 10;
    printf("\nMedia dos 10 numeros positivos: %.2f\n", media);

    return 0;
}