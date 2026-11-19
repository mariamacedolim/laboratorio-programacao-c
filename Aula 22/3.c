/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    int numero = 15;
    int *p = &numero;

    printf("Valor inicial: %d\n", numero);

    *p = 50;

    printf("Valor atualizado: %d\n", numero);

    return 0;
}