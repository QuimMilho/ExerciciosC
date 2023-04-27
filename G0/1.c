#include <stdio.h>
#include <limits.h>

int maior(int *lista, int tamanho);

int main() {
    int n;
    scanf("%d", &n);
    int lista[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }
    int k = maior(lista, n);
    printf("%d\n", k);
    return 0;
}

int maior(int *lista, int tamanho) {
    int i, maior = INT_MIN;
    for (i = 0; i < tamanho; i++) {
        if (lista[i] > maior) {
            maior = lista[i];
        }
    }
    return maior;
}