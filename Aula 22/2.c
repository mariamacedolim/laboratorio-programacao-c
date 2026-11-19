/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    int numero = 20;
    int *p;

    p = &numero;

    printf("Valor da variavel: %d\n", numero);
    printf("Endereco da variavel: %p\n", (void *)&numero);
    printf("Valor acessado pelo ponteiro: %d\n", *p);

    return 0;
}