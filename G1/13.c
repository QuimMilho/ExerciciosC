#include <stdio.h>

double produto_escalar(double *a, double *b, int n);

int main() {
    double a[] = {1.5, 2.5, 3.5, 1.4, 10, 9, 2, 3, 5, 5, 10};
    double b[] = {2, 6, 4, 5, 1.5, 3, 2.4, 11, 2, 3, 4};
    double p = produto_escalar(a, b, 11);
    printf("%0.2lf", p);
    return 0;
}

double produto_escalar(double *a, double *b, int n) {
    double produto = 0;
    int i;
    for (i = 0; i < n; i++) {
        produto += (a[i] * b[i]);
    }
    return produto;
}