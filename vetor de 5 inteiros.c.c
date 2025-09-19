#include <stdio.h>

int main() {
    int vetor[10], i, s, m, M;

    for(i=0; i<5; i++) scanf("%d", &vetor[i]);
    for(i=0; i<5; i++) printf("%d ", vetor[i]);
    printf("\n");

    s = 0;
    for(i=0; i<10; i++) { scanf("%d", &vetor[i]); s += vetor[i]; }
    printf("Soma: %d\n", s);

    for(i=0; i<8; i++) scanf("%d", &vetor[i]);
    M = m = vetor[0];
    for(i=1; i<8; i++) {
        if(vetor[i] > M) M = vetor[i];
        if(vetor[i] < m) m = vetor[i];
    }
    printf("Maior: %d | Menor: %d\n", M, m);

    s = 0;
    for(i=0; i<6; i++) { scanf("%d", &vetor[i]); s += vetor[i]; }
    printf("Media: %.2f\n", s/6.0);

    return 0;
}
