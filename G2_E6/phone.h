//
// Created by jrodm on 26/04/2021.
//

#ifndef G2_6_PHONE_H
#define G2_6_PHONE_H

typedef struct contactos contacto;

struct contactos {
    char numero[15], nome[100];
};

//  c)
int addNumber(contacto **lista, int *tam);

//  d)
void printLista(contacto *lista, int tam);

//  e)
char *findContacto(contacto *lista, int tam);

//  f)
void changeNumber(contacto *lista, int tam);

//  g)
int deleteContacto(contacto **lista, int *tam);

//  h)
int addNumberOrder(contacto **lista, int *tam);

#endif //G2_6_PHONE_H
