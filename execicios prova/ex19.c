
#include <stdio.h>
void DesenhaLinha(int n) {
    for (int i = 0; i < n; i++) {
        printf("=");
    }
    printf("\n");
}

int main() {
    int quantidade;
    
    printf("Quantos sinais de igual deseja imprimir? ");
    scanf("%d", &quantidade);
    
    DesenhaLinha(quantidade);
    
    return 0;
}
