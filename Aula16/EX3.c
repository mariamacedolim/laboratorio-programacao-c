/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    printf("Primeiro caractere: %c\n", palavra[0]);

    return 0;
}