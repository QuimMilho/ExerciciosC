#include <stdio.h>

int iguais(int *a, int tamA, int *b, int tamB);

int main() {
    int a[] =
    return 0;
}

int iguais(int *a, int tamA, int *b, int tamB) {
    if (tamA != tamB)
        return 0;
    int i;
    for (i = 0; i < tamA; i++) {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}