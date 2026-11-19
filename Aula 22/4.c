/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main(void) {
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    dobrar(&valor);

    printf("Valor dobrado: %d\n", valor);

    return 0;
}