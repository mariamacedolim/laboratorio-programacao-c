/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    int numeros[5];
    int *p = numeros;

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros armazenados:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));
    }

    return 0;
}