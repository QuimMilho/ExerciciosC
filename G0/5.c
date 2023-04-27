#include <stdio.h>

int aparece(int *lista, int tam, int n);

int main() {
    int lista[] = {59, 24, -111, 29, 29, 59, 121, 121, 121, 29};
    int k = aparece(lista, 10, 69);
    printf("Existe? %d", k);
    return 0;
}

int aparece(int *lista, int tam, int n) {
    int i;
    for (i = 0; i < tam; i++) {
        if (lista[i] == n)
            return 1;
    }
    return 0;
}