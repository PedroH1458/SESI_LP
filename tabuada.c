#include <stdio.h>
int main()
{
    int tabuada = 0;
    
    printf("Digite o número da tabuada: ");
    scanf("%d", &tabuada);
    
    for(int i = 1; i <= 10; i++){
      printf("\n%d x %d = %d", i, tabuada, i * tabuada) ;
    }
    
}
