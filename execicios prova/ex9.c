#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    if (a > b)
        printf("Maior: %d\n", a);
    else
        printf("Maior: %d\n", b);
    
    return 0;
}
