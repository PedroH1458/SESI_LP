#include <stdio.h>

int dobro(int n) {
    return n * 2;
}

int main() {
    int valor;

    printf("Digite um numero inteiro: ");
    
    if (scanf("%d", &valor) != 1) {
        printf("Erro: entrada invalida. Digite um numero inteiro.\n");
        return 1;
    }

    printf("O dobro de %d eh %d.\n", valor, dobro(valor));
    return 0;
}