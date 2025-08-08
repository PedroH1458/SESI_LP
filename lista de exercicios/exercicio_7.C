#include <stdio.h>

int main()
{
    char produto[100];
    float preçounidade;
    int quantidade;
    
    printf("Digite o produto: ");
    scanf("%s", produto);
    
    printf("Digite o preço: ");
    scanf("%f", &preçounidade);
    
    printf("Digite o quantidade: ");
    scanf("%d", &quantidade);
    
    
    float total = preçounidade * quantidade;
    printf(" O total da compra é: %f", total);
    
}