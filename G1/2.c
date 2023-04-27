#include <stdio.h>

void troca(float *a, float *b, float *c);

int main() {
    float a = 2.0, b = 3.0, c = 4.0;
    troca(&a, &b, &c);
    printf("a=%f, b=%f, c=%f", a, b, c);
    return 0;
}

void troca(float *a, float *b, float *c) {
    float fora = *a;
    *a = *c;
    *c = *b;
    *b = fora;
}