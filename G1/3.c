#include <stdio.h>

float media(int *array, int tam);
void substitui(int *array, int tam);

int main() {
    int k[] = {1, 3, 6, 5, 2, 3, 5, 10, 9, -1, 15};
    substitui(k, 11);
    int i;
    for (i = 0; i < 11; i++) {
        printf("%d\t", k[i]);
    }
    return 0;
}

float media(int *array, int tam) {
    float soma = 0;
    int i;
    for (i = 0; i < tam; i++) {
        soma += (float) array[i];
    }
    return soma / (float) tam;
}

void substitui(int *array, int tam) {
    float med = media(array, tam);
    int i;
    for (i = 0; i < tam; i++) {
        if (array[i] < med)
            array[i] = 0;
    }
}