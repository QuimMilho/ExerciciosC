#include "retangulo.h"
#include <stdio.h>

int main() {
    retangulo rect;
    initRect(&rect, 2, 3, 5, 4);
    printRect(&rect);
    printf("Area do []: %d\n\n", area(&rect));
    printf("Dentro do retangulo: %d\n\n", dentro(&rect, 1, 2));
    printf("Dentro do retangulo: %d\n\n", dentro(&rect, 4, 5));
    move(&rect, 2, 2);
    printRect(&rect);
    printf("Dentro do retangulo: %d\n\n", dentro(&rect, 4, 5));
    return 0;
}
