#include <stdio.h>
#include <string.h>

void mesEmIngles(char *mes);

int main() {
    char mes[20];
    gets(mes);
    mesEmIngles(mes);
    puts(mes);
    return 0;
}

void mesEmIngles(char *mes) {
    if (strcmpi(mes, "janeiro") == 0) {
        strcpy(mes, "January");
    } else if (strcmpi(mes, "fevereiro") == 0) {
        strcpy(mes, "February");
    } else if (strcmpi(mes, "marco") == 0) {
        strcpy(mes, "March");
    } else if (strcmpi(mes, "abril") == 0) {
        strcpy(mes, "April");
    } else if (strcmpi(mes, "maio") == 0) {
        strcpy(mes, "May");
    } else if (strcmpi(mes, "Junho") == 0) {
        strcpy(mes, "June");
    } else if (strcmpi(mes, "Julho") == 0) {
        strcpy(mes, "July");
    } else if (strcmpi(mes, "Agosto") == 0) {
        strcpy(mes, "August");
    } else if (strcmpi(mes, "Setembro") == 0) {
        strcpy(mes, "September");
    } else if (strcmpi(mes, "Outubro") == 0) {
        strcpy(mes, "October");
    } else if (strcmpi(mes, "novembro") == 0) {
        strcpy(mes, "November");
    } else if (strcmpi(mes, "Dezembro") == 0) {
        strcpy(mes, "December");
    } else {
        strcpy(mes, "Esse mes nao existe");
    }
}