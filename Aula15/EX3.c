/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(void) {
    int numeros[3][3] = {
        {30, 21, 13},
        {45, 5, 10},
        {6, 8, 100}
    };
    int pares = 0;


    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            if (numeros[linha][coluna] % 2 == 0) {
                pares++;
            }
        }
    }

    printf("Quantidade de valores pares: %d\n", pares);

    return 0;
}