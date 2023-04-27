#ifndef RETANGULO_H
#define RETANGULO_H

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

#endif //RETANGULO_H
