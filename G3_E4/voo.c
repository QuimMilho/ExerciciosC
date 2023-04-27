#include "voo.h"
#include <stdio.h>
#include <string.h>

void printInfoVoo(Voo *voo) {
    printf("\n-> N. voo: %s\n", voo->nvoo);
    printf("- Companhia: %s\n", voo->companhia);
    printf("- Destino a (IATA): %s\n", voo->destino);
    printf("- Hora de partida: %d:%d\n\n", voo->partida.horas, voo->partida.minutos);
}

void initVoo(Voo *voo) {
    printf("Introduza o N. voo (10):");
    gets(voo->nvoo);
    printf("Introduza a companhia do voo (32):");
    gets(voo->companhia);
    printf("Introduza o destino do voo (IATA) (3):");
    gets(voo->destino);
    printf("Introduza a hora do voo (hora:minutos):");
    char c[10];
    gets(c);
    sscanf(c, "%d:%d", &voo->partida.horas, &voo->partida.minutos);
}

void changeTime(Voo *voo, int tam) {
    char nVoo[11];
    printf("\nIntroduza o numero de voo cuja hora vai alterar:");
    gets(nVoo);
    int index = findVoo(voo, tam, nVoo);
    if (index < 0)
        return;
    printf("\nIntroduza a nova hora do voo %s (hora : minutos):", voo->nvoo);
    char t[10];
    gets(t);
    Voo novo;
    replace(&novo, &voo[index]);
    sscanf(t, "%d:%d", &novo.partida.horas, &novo.partida.minutos);
    int i, in = index;
    if (antes(&novo, &voo[index])) {
        for (i = 0; i < index; i++) {
            if (antes(&novo, &voo[i])) {
                in = i;
                break;
            }
        }
        for (i = index; i > in; i--) {
            replace(&voo[i], &voo[i - 1]);
        }
        replace(&voo[in], &novo);
    } else {
        for (i = tam - 1; i > index; i--) {
            if (depois(&novo, &voo[i])) {
                in = i;
                break;
            }
        }
        for (i = index; i < in; i++) {
            replace(&voo[i], &voo[i + 1]);
        }
        replace(&voo[in], &novo);
    }
}

int departed(Voo *voo, Tempo *now) {
    if (voo->partida.horas > now->horas) {
        return 1;
    } else if (voo->partida.horas == now->horas) {
        if (voo->partida.minutos > now->minutos)
            return 1;
    }
    return 0;
}

void inserirVoos(Voo *voo, int *tam) {
    int n, i, bool = 0, h;
    if (*tam == MAX_VOO) {
        printf("Tabela cheia!");
    }
    do {
        if (bool) {
            printf("A tabela nao tem espaco para tantos elementos!\n");
        }
        char c[10];
        printf("\n\nQuantos voos pretende inserir:");
        gets(c);
        sscanf(c, "%d", &n);
        bool = 1;
    } while (*tam + n >= MAX_VOO);
    for (i = 0; i < n; i++) {
        printf("\n");
        Voo ins;
        int in = *tam;
        initVoo(&ins);
        for (h = 0; h < *tam; h++) {
            if (antes(&ins, &voo[h])) {
                in = h;
                break;
            }
        }
        for (h = *tam; h > in; h--) {
            replace(&voo[h], &voo[h - 1]);
        }
        replace(&voo[in], &ins);
        *tam = *tam + 1;
    }
}

void printAllFlights(Voo *voo, int tam) {
    int i;
    printf("\n----------------------------------------------\n\n\tTotal de voos: %d\n", tam);
    for (i = 0; i < tam; i++) {
        printInfoVoo(&voo[i]);
    }
    printf("----------------------------------------------\n\n");
}

void nextFlights(Voo *voo, int tam, Tempo *now) {
    int i, min, nowMin = now->horas * 60 + now->minutos;
    printf("\n----------------------------------------------\n\n");
    for (i = 0; i < tam; i++) {
        min = voo[i].partida.horas * 60 + voo[i].partida.minutos;
        if (min - nowMin <= 30 && min - nowMin >= 0) {
            printInfoVoo(&voo[i]);
            printf("Tempo para o voo: %d minutos\n\n\n", min - nowMin);
        }
    }
    printf("----------------------------------------------\n\n");
}

void atualizar(Voo *voo, int *tam, Tempo *now) {
    int i, h;
    for (i = 0; i < *tam; i++) {
        if (!departed(&voo[i], now)) {
            for (h = i + 1; h < *tam; h++) {
                replace(&voo[h - 1], &voo[h]);
            }
            i--;
            *tam = *tam - 1;
        }
    }
}

int antes(Voo *voo, Voo *vooI) {
    int min = voo->partida.horas * 60 + voo->partida.minutos;
    int minI = vooI->partida.horas * 60 + vooI->partida.minutos;
    if (min < minI)
        return 1;
    return 0;
}

int depois(Voo *voo, Voo *vooI) {
    int min = voo->partida.horas * 60 + voo->partida.minutos;
    int minI = vooI->partida.horas * 60 + vooI->partida.minutos;
    if (min > minI)
        return 1;
    return 0;
}

void replace(Voo *vooN/*Onde vai a informacao*/, Voo *vooS/*Dados a substituir*/) {
    strcpy(vooN->nvoo, vooS->nvoo);
    strcpy(vooN->destino, vooS->destino);
    strcpy(vooN->companhia, vooS->companhia);
    vooN->partida.horas = vooS->partida.horas;
    vooN->partida.minutos = vooS->partida.minutos;
}

int findVoo(Voo *voo, int tam, char *c) {
    int i;
    for (i = 0; i < tam; i++) {
        if (strcmpi(voo[i].nvoo, c) == 0)
            return i;
    }
    printf("Voo nao encontrado!\n");
    return -1;
}