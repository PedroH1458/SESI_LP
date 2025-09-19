#include <stdio.h>

int main() {
    int v[10], i, s, m, M;

    for(i=0; i<5; i++) scanf("%d", &v[i]);
    for(i=0; i<5; i++) printf("%d ", v[i]);
    printf("\n");

    s = 0;
    for(i=0; i<10; i++) { scanf("%d", &v[i]); s += v[i]; }
    printf("Soma: %d\n", s);

    for(i=0; i<8; i++) scanf("%d", &v[i]);
    M = m = v[0];
    for(i=1; i<8; i++) {
        if(v[i] > M) M = v[i];
        if(v[i] < m) m = v[i];
    }
    printf("Maior: %d | Menor: %d\n", M, m);

    s = 0;
    for(i=0; i<6; i++) { scanf("%d", &v[i]); s += v[i]; }
    printf("Media: %.2f\n", s/6.0);

    return 0;
}