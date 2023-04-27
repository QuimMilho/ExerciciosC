#include <stdio.h>
#include "retangulo.h"

int main() {
    retangulo rect[RECT_MAX];
    int tam = 0;
    readRect(rect, &tam);
    readRect(rect, &tam);
    readRect(rect, &tam);
    readRect(rect, &tam);
    readRect(rect, &tam);
    readRect(rect, &tam);
    readRect(rect, &tam);
    readRect(rect, &tam);
    readRect(rect, &tam);
    readRect(rect, &tam);
    readRect(rect, &tam);
    printAll(rect, tam);
    return 0;
}
