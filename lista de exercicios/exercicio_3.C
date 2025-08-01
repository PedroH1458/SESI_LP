#include <stdio.h>

int main() {
    float a, b, c;  
    float media;

    printf("\nDigite sua primeira nota: ");
    scanf("%f", &a);

    printf("\nDigite sua segunda nota: ");
    scanf("%f", &b); 

    printf("\nDigite sua terceira nota: ");
    scanf("%f", &c);

    media = (a + b + c) / 3;

    printf("\nA média das notas é: %.2f\n", media);

}
