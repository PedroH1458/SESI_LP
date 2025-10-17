#include <stdio.h>

int maior_valor(int v[], int n){
    int maior = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

int main() {
    int nums[] = {5, 2, 9, 1};
    int m = maior_valor(nums, 4);
    printf("%d\n", m);
    return 0;
}
