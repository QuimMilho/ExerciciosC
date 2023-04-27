#include <stdio.h>
#include "retangulo.h"

void printRect(retangulo *rect) {
    printf("Coordenadas dos pontos:\n(%d\t%d)-----(%d\t%d)\n", rect->x, rect->y + rect->height, rect->x + rect->width,
           rect->y + rect->height);
    int i;
    for (i = 0; i < 6; i++)
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