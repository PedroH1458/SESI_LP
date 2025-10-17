#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro positivo e impar: ");
    scanf("%d", &N);

    if (N <= 0 || N % 2 == 0) {
        printf("Numero invalido! Deve ser positivo e impar.\n");
        return 1;
    }

    printf("Numeros impares de 1 ate %d:\n", N);
    for (int i = 1; i <= N; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}

