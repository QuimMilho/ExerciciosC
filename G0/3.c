#include <stdio.h>
#include <limits.h>

int nMaior(int *lista, int tamanho);

int main() {
    int lista[] = {59, 24, -111, 29, 29, 59, 121, 78, 121, 29};
    int k = nMaior(lista, 10);
    printf("Repeticoes: %d\n", k);
    return 0;
}

int nMaior(int *lista, int tamanho) {
    int i, n = 0, m = INT_MIN;
    for (i = 0; i < tamanho; i++) {
        if (lista[i] > m) {
            n = 1;
            m = lista[i];
        } else if (lista[i] == m) {
            n++;
        }
    }
    return n;
}