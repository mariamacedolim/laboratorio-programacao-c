/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma = soma + matriz[i][j];
        }
    }

    printf("A soma dos elementos da matriz e: %d\n", soma);

    return 0;
}