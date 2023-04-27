#include <stdio.h>

void soma(int *a, int *b, int tam);

int main() {

    return 0;
}

void soma(int *a, int *b, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        a[i] = a[i] + b[i];
    }
}