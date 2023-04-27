#ifndef TEMPO_H
#define TEMPO_H

#define MAX_VOO 300

typedef struct vooStruct Voo;
typedef struct tempoStruct Tempo;

//int a = 0;
//struct tempoStruct = {};
//typedef "struct tempoStruct" "Tempo";

struct tempoStruct {
    int horas, minutos;
};

struct vooStruct {
    char nvoo[11];
    char companhia[32];
    char destino[4];
    Tempo partida;
};

void printInfoVoo(Voo *voo);

void initVoo(Voo *voo);

void changeTime(Voo *voo, int tam);

int departed(Voo *voo, Tempo *now);

void inserirVoos(Voo *voo, int *tam);

void printAllFlights(Voo *voo, int tam);

void nextFlights(Voo *voo, int tam, Tempo *now);

void atualizar(Voo *voo, int *tam, Tempo *now);

int antes(Voo *voo, Voo *vooI);

int depois(Voo *voo, Voo *vooI);

void replace(Voo *vooN, Voo *vooS);

int findVoo(Voo *voo, int tam, char *c);

#endif
