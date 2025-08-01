#include <stdio.h>

int main() {
    int a = 2;
    int b = 5;
    int resultado = a + b;
    
    printf("digite um numero: ");
    scanf("%d", &a);
    
    printf("digite outro numero para a soma: ");
    scanf("%d", &b);

    resultado = a + b;

    printf("o resultado é da soma %d + %d = %d \n", a, b ,resultado);

    return 0;
}