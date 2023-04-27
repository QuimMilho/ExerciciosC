#include <stdio.h>
#include "phone.h"
#include "menu.h"

int main() {
    int tam = 0;
    contacto *contactos = NULL;
    int k;
    do {
        k = menu();
        switch (k) {
            case EXIT:
                printf("Adeus!");
                break;
            case ADD_CONTACT:
                addNumber(&contactos, &tam);
                break;
            case SHOW_ALL:
                printLista(contactos, tam);
                break;
            case FIND:
                findContacto(contactos, tam);
                break;
            case CHANGE:
                changeNumber(contactos, tam);
                break;
            case DELETE:
                deleteContacto(&contactos, &tam);
                break;
            default:
                printf("Essa opcao nao e valida!");
                break;
        }
    } while (k != 0);
    return 0;
}