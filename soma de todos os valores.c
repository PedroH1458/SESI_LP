#include <stdio.h>

int main()
{
    int numero [6];
    int soma = 0;
    
    printf("Digite o primeiro valor:\n");
    scanf("%d", &numero[0]);
   
    printf("Digite o segundo valor:\n");
    scanf("%d", &numero[1]);
    
    printf("Digite terceiro valor:\n");
    scanf("%d", &numero[2]);
    
    printf("Digite o quarto valor:\n");
    scanf("%d", &numero[3]);
    
    printf("Digite o quinto valor:\n");
    scanf("%d", &numero[4]);
    
    printf("Digite o sexto valor:\n");
    scanf("%d", &numero[5]);
    
    soma = numero[0] +
           numero[1] +
           numero[2] +
           numero[3] +
           numero[4] +
           numero[5];
           
    printf("A soma de todos os valores é: %d", soma);
    
    return 0;
    
   
}
