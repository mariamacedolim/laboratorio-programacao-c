/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Valor da variavel: %d\n", numero);
    printf("Endereco da variavel: %p\n", (void *)&numero);

    return 0;
}