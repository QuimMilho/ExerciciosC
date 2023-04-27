#include <stdio.h>

void vizinhos(int *tab, int dim, int *igual);
int media(int a, int b);

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[] = {2, 4, 6, 1, 3, 5, 9, 7, 5, 3};
    int r1 = 0;
    int r2 = 0;
    vizinhos(a, 10, &r1);
    vizinhos(b, 10, &r2);
    printf("Resultado 1: %d \t Resultado 2: %d", r1, r2);
    return 0;
}

void vizinhos(int *tab, int dim, int *igual) {
    int i;
    for (i = 1; i < dim - 1; i++) {
        int m = media(tab[i - 1], tab[i + 1]);
        if (tab[i] == m)
            *igual = *igual + 1;
    }
}

int media(int a, int b) {
    return (a + b) / 2;
}