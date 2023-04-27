#include "phone.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

contacto obtemInfo(contacto *lista, int tam);
int newIndex(contacto *lista, int tam, contacto *novo);
int checkAlphabeticOrder(char *first, char *second);

//  c)
int addNumber(contacto **lista, int *tam) {
    contacto *aux;
    aux = realloc(*lista, sizeof(contacto) * (*tam + 1));
    if (aux == NULL) {
        return -1;
    }
    (*lista) = aux;
    (*lista)[*tam] = obtemInfo(*lista, *tam);
    (*tam)++;
    return 0;
}

contacto obtemInfo(contacto *lista, int tam) {
    char n[15], m[100];
    contacto novo = {"", ""};
    int done;
    do {
        done = 1;
        printf("\nInsira o numero de telemovel:");
        gets(n);
        printf("Insira o nome do contacto:");
        gets(m);
        int i;
        for (i = 0; i < tam; i++) {
            if (strcmp(lista[i].nome, m) == 0) {
                printf("\nJa existe um contacto com esse nome!\n");
                done = 0;
            } else if (strcmp(lista[i].numero, n) == 0) {
                printf("\nEsse numero ja esta guardado na agenda!\n");
                done = 0;
            }
        }

    } while (!done);
    strcpy(novo.nome, m);
    strcpy(novo.numero, n);
    return novo;
}

//  d)
void printLista(contacto *lista, int tam) {
    int i;
    printf("\n\n\tLista de contactos:\nSao um total de %d!\n\n", tam);
    for (i = 0; i < tam; i++) {
        printf("Nome: %s\nNumero: %s\n\n", (lista[i]).nome, (lista[i]).numero);
    }
}

//  e)
char *findContacto(contacto *lista, int tam) {
    char nome[100];
    printf("\n\nInsira o nome a procurar:");
    gets(nome);
    int i;
    for (i = 0; i < tam; i++) {
        if (strcmp(lista[i].nome, nome) == 0) {
            printf("O numero e %s!", lista->numero);
            return lista->numero;
        }
    }
    printf("\nContacto nao encontrado!\n");
    return NULL;
}

//  f)
void changeNumber(contacto *lista, int tam) {
    char nome[100];
    printf("\nInsira o nome do contacto a alterar:");
    gets(nome);
    int i, found = 0;
    for (i = 0; i < tam; i++) {
        if (strcmp(lista[i].nome, nome) == 0) {
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Esse contacto nao existe!\n");
        return;
    }
    char n[15];
    printf("\nNumero atual: %s\n", lista[i].numero);
    printf("\nPara que numero deseja trocar?");
    gets(n);
    strcpy(lista[i].numero, n);
    printf("\nNumero alterado com sucesso!\n");
}

//  g)
int deleteContacto(contacto **lista, int *tam) {
    char nome[100];
    printf("Insira o nome do contacto a apagar:");
    gets(nome);
    int i, found = 0;
    for (i = 0; i < *tam; i++) {
        char *nom = (*lista)[i].nome;
        if (strcmp(nom, nome) == 0) {
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Esse contacto nao existe!\n");
        return 0;
    }
    //Remover contacto
    int h;
    for (h = i + 1; h < *tam; h++) {
        (*lista)[h-1] = (*lista)[h];
    }
    //Alterar ordem
    contacto *aux;
    aux = realloc((*lista), sizeof(contacto) * (*tam - 1));
    if (aux == NULL) {
        return -1;
    }
    (*lista) = aux;
    (*tam)--;
    return 0;
}

//  h)
int addNumberOrder(contacto **lista, int *tam) {
    contacto *aux;
    aux = realloc(*lista, sizeof(contacto) * (*tam + 1));
    if (aux == NULL) {
        return -1;
    }
    contacto novo = obtemInfo(*lista, *tam);
    int pos = newIndex(*lista, *tam, &novo), i;
    (*lista) = aux;
    printf("pos:%d", pos);
    for (i = *tam; i > pos; i--) {
        lista[i] = lista[i - 1];
    }
    (*lista)[pos] = novo;
    *tam = *tam + 1;
    return 0;
}

int newIndex(contacto *lista, int tam, contacto *novo) {
    int index = 0, i, h;
    char nome[100];
    strcpy(nome, novo->nome);
    for (h = 0; h < strlen(nome); h++) {
        nome[h] = (char) tolower(nome[h]);
    }
    for (i = 0; i < tam; i++) {
        char str[100];
        strcpy(str, lista[i].nome);
        for (h = 0; h < strlen(str); h++) {
            str[h] = (char) tolower(str[h]);
        }
        if (str[0] == nome[0]) {
            if (checkAlphabeticOrder(nome, str)) {
                return i;
            }
        } else if (str[0] > nome[0]) {
            return i;
        }
    }
    return index;
}

int checkAlphabeticOrder(char *first, char *second) {
    int i, tam, small;
    if (strlen(first) >= strlen(second)) {
        tam = (int) strlen(second);
        small = 2;
    } else {
        tam = (int) strlen(first);
        small = 1;
    }
    for (i = 0; i < tam; i++) {
        if (first[i] < second[i]) {
            return 1;
        }
    }
    if (small == 1)
        return 1;
    return 0;
}