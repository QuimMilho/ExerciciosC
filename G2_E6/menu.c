#include <stdio.h>
#include "menu.h"
#include "util.h"

void printMenu(int id, char *text) {
    printf("%d - %s\n", id, text);
}

int menu() {
    int k;
    printf("\n\nMenu\n\n");
    //Menus
    printMenu(EXIT, "Sair");
    printMenu(ADD_CONTACT, "Adicionar contacto");
    printMenu(SHOW_ALL, "Imprimir contactos");
    printMenu(FIND, "Encontrar contacto");
    printMenu(CHANGE, "Trocar numero de contacto");
    printMenu(DELETE, "Apagar contacto");
    //OPCAO
    printf("Opcao:");
    scanf("%d", &k);
    flush_in();
    return k;
}