#include <stdio.h>
#include "voo.h"
#include <time.h>

void menu(Voo *voo, int *tam);
Tempo horaAtual();

int main() {
    Voo voo[MAX_VOO];
    int tam = 0;
    menu(voo, &tam);
    return 0;
}

void menu(Voo *voo, int *tam) {
    char c;
    do {
        printf("\n\tMenu:\n1 - Introduzir novos voos\n2 - Listar todos os voos\n3 - Listar proximos voos\n4 - Atualizar tabela de voos\n5 - Alterar hora de voo\n6 - Terminar\n\nOpcao (1):");
        gets(&c);
        if (c == '1') {
            inserirVoos(voo, tam);
        } else if (c == '2') {
            printAllFlights(voo, *tam);
        } else if (c == '3') {
            Tempo tempo = horaAtual();
            nextFlights(voo, *tam, &tempo);
        } else if (c == '4') {
            Tempo tempo = horaAtual();
            atualizar(voo, tam, &tempo);
        } else if (c == '5') {
            changeTime(voo, *tam);
        } else if (c == '6') {
            break;
        } else {
            printf("\n\nNumero invalido!\n\n\n");
        }
    } while (c != '6');
}

Tempo horaAtual() {
    time_t a;
    struct tm *b;
    Tempo now;
    time(&a);
    b = localtime(&a);
    now.horas = b->tm_hour;
    now.minutos = b->tm_min;
    return now;
}