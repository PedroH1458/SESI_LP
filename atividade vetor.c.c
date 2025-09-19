#include <stdio.h>

void main(){
    int vetor[3];
    
    printf("Digite o valor de 1\n");
    scanf("%d\n", &vetor[0]);
    printf("Digite o valor de 2\n");
    scanf("%d\n", &vetor[1]);
    printf("Digite o valor de 3\n");
    scanf("%d\n", &vetor[2]);
    
    
    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    
    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[1]);
    printf("%d\n", vetor[2]);
    
    for (int i=0; i <= 2; i++) {
    printf("%d\n", vetor[i] );
    
        
    }
 
}
