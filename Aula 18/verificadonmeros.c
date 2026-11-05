/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void mensagem(void) { 
printf("Verificador de números!¡ \n");

}

int parouimpar(int a) {
    
        if (a % 2 == 0){
            return 1;
        } else {
            return 0;
        }
}

int main(void) {
int a;
mensagem();

printf("Digite o seu número: ");
scanf("%d", &a);


if (parouimpar(a) == 1){
    printf ("O número %d é par!!", a);
} else {
     printf ("O número %d é ímpar!!", a);
}
  
  
    return 0;
}
