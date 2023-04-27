#include <stdio.h>
#include "retangulo.h"

//Ex 2

void printRect(retangulo *rect) {
    printf("Coordenadas dos pontos:\n(%d\t%d)-----(%d\t%d)\n", rect->x, rect->y + rect->height, rect->x + rect->width,
           rect->y + rect->height);
    int i;
    for (i = 0; i < 2; i++)
        printf("     |              |\n");
    printf("(%d\t%d)-----(%d\t%d)\n\n", rect->x, rect->y, rect->x + rect->width, rect->y);
}

void initRect(retangulo *rect, int x, int y, int width, int height) {
    rect->x = x;
    rect->y = y;
    rect->width = width;
    rect->height = height;
}

int area(retangulo *rect) {
    return rect->width * rect->height;
}

int dentro(retangulo *rect, int x, int y) {
    if (x > rect->x && x < rect->x + rect->width)
        if (y > rect->y && y < rect->y + rect->height)
            return 1;
    return 0;
}

void move(retangulo *rect, int x, int y) {
    rect->x = rect->x + x;
    rect->y = rect->y + y;
}

//Ex 3

void readRect(retangulo *rect, int *tam) {
    if (*tam >= RECT_MAX) {
        printf("A array de retangulos esta cheia!\n\n");
        return;
    }
    int x, y ,width, height;
    printf("\nRetangulo n: %d\n\n", *tam + 1);
    printf("Coordenadas do ponto no canto inferior esquerdo\nInsira o X:");
    scanf("%d", &x);
    printf("Insira o Y:");
    scanf("%d", &y);
    printf("\nInsira a altura do retangulo:");
    scanf("%d", &height);
    printf("Insira a largura do retangulo:");
    scanf("%d", &width);
    initRect(&rect[*tam], x, y, width, height);
    *tam = *tam + 1;
    printf("\nRetangulo registado com sucesso!\n\n");
}

void printAll(retangulo *rect, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("\nRetangulo n: %d\n\n", i + 1);
        printRect(&rect[i]);
        printf("\n");
    }
}