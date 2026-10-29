/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void) {
    char nomep[50];
    char tipo[40];
    char copianome[50];
    char categoria[20];
    char descricao[80] = "Produto: ";

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Nome do produto: ");
    scanf("%49s", nomep);

    printf("Categoria: ");
    scanf("%39s", tipo);


if (strcmp(tipo, "HARDWARE") == 0 || strcmp(tipo, "hardware") == 0 || strcmp(tipo, "Hardware") == 0) {
    strcpy(categoria, "Hardware");
} else if (strcmp(tipo, "PERIFERICO") == 0 || strcmp(tipo, "periferico") == 0 || strcmp(tipo, "Periferico") == 0) {
    strcpy(categoria, "Periferico");
} else {
    strcpy(categoria, "Invalida");
}


    strcpy(copianome, nomep);


    strcat(descricao, copianome);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", copianome);
    printf("Caracteres: %zu\n", strlen(nomep));   
    printf("Categoria: %s\n", categoria);

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}