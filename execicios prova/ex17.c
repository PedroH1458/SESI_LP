#include <stdio.h>

void imprimirDataPorExtenso(int dia, int mes, int ano) {
    const char* meses[] = {
        "janeiro", "fevereiro", "marco", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    if (mes < 1 || mes > 12) {
        printf("Mes invalido!\n");
        return;
    }

    printf("%d de %s de %d\n", dia, meses[mes - 1], ano);
}

int main() {
    int d, m, a;

    printf("Digite a data (dia mes ano): ");
    scanf("%d %d %d", &d, &m, &a);

    imprimirDataPorExtenso(d, m, a);

    return 0;
}
