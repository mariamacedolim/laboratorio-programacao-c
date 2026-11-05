/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void mensagem(void) { 
printf("Calculadora de Preços!¡ \n");

}

float maiorpreco(float a, float b) {
    
        if (a>b){
            return a;
        } else if (b>a) {
            return b;
        } else{
             printf("Valores iguais\n");
             return 0;
        }
}

int main(void) {
float a, b;
mensagem();

printf("Digite o preço 1: ");
scanf("%f", &a);


printf("Digite o preço 2: ");
scanf("%f", &b);

printf("Maior preço: %.2f", maiorpreco(a,b));
  
  
    return 0;
}
