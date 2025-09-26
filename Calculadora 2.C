#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    switch(op) {
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Resultado: %.2f\n", num1 / num2);
            else
                printf("Erro: divisão por zero!\n");
            break;
        default:
            printf("Operador inválido.\n");
    }

    return 0;
}
