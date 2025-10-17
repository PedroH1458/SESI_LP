#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    if (a > b)
        printf("Maior: %d\n", a);
    else if (b > a)
        printf("Maior: %d\n", b);
    else
        printf("Numeros iguais\n");
    
    return 0;
    