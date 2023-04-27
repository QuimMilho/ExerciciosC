#include <stdio.h>
#include <math.h>

double desvio(double *lista, int tam);

int main() {
    double lista[] = {1, -2, 3, 4, -5, 6};
    double k = desvio(lista, 6);
    printf("%lf\n", k);
    return 0;
}

double desvio(double *lista, int tam) {
    double media = 0;
    int i;
    for (i = 0; i < tam; i++) {
        media += lista[i];
    }
    media = media / tam;
    double sDesvio = 0;
    for (i = 0; i < tam; i++) {
        sDesvio += pow(media - lista[i], 2);
    }
    double k = sqrt((1.0 / tam) * sDesvio);
    return k;
}