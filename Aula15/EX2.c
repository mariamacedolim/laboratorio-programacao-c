/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    float notas[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Aluno %d - nota da prova %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        float soma = 0;
        for (int j = 0; j < 2; j++) {
            soma += notas[i][j];
        }
        printf("Media do aluno %d: %.1f\n", i + 1, soma / 2);
    }

    return 0;
}