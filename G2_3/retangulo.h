#ifndef RETANGULO_H
#define RETANGULO_H

#define RECT_MAX 10

//Ex 2

typedef struct rect retangulo;

struct rect {
    int x, y;
    int width, height;
};

void printRect(retangulo *rect);

void initRect(retangulo *rect, int x, int y, int width, int height);

int area(retangulo *rect);

int dentro(retangulo *rect, int x, int y);

void move(retangulo *rect, int x, int y);

//Ex 3

void readRect(retangulo *rect, int *tam);

void printAll(retangulo *rect, int tam);

#endif //RETANGULO_H
