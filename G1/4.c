#include <stdio.h>
#include <limits.h>

void f(int *t, int tam, int *np, int *ni, int *maior, int *menor);

int main() {
    int a[] = {1, 3, 7, 5, 2, 10, 9, 7, 7, 1};
    int numeroPares, numeroImpares, maior, pos;
    f(a, 10, &numeroPares, &numeroImpares, &maior, &pos);
    printf("Numeros pares: %d\nNumeros impares: %d\nMaior numero: %d, Posicao: %d", numeroPares, numeroImpares, maior, pos);
    return 0;
}

void f(int *t, int tam, int *np, int *ni, int *maior, int *pos) {
    int i;
    *maior = INT_MIN;
    *np = 0;
    *ni = 0;
    *pos = -1;
    for (i = 0; i < tam; i++) {
        if (t[i] % 2 == 0) {
            *np = *np + 1;
        } else {
            *ni = *ni + 1;
        }
        if (t[i] > *maior) {
            *maior = t[i];
            *pos = i;
        }
    }
}