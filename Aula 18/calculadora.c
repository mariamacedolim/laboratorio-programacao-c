/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void mensagem(void) { 
printf("Bem-vindo ao sistema! Escolha uma das opções abaxo:\n");
printf("1-Somar\n");
printf("2-Subtrair\n");
printf("3-Multiplicar\n");
printf("4-Dividir\n");
printf("0-Nehuma\n");}

float subtrair(float a, float b) { 
return a - b;}



float multiplicar(float a, float b) { 
return a * b; 
} 

float soma(float a, float b) { 
return a + b; 
} 

float dividir(float a, float b) { 
return a / b; 
} 


 

int main(void) {
    int opcao;
    float a, b;
    
    mensagem();
    
    
    
printf("Escolha uma opção: ");
scanf("%d",&opcao);



if(opcao>= 1 && opcao<= 4 ){
printf("Escolha seu primeiro número: ");
scanf("%f", &a);

printf("Escolha seu segundo número: ");
scanf("%f", &b);
} 



switch (opcao){
    case 1: 
    printf("Resultado: %.1f\n", soma(a,b));
    break;
    
     case 2: 
    printf("Resultado: %.1f\n", subtrair(a,b));
    break;
    
     case 3: 
    printf("Resultado: %.1f\n", multiplicar(a,b));
    break;
    
     case 4: 
    printf("Resultado: %.1f\n", dividir(a,b));
    break;
    
    case 0:
    printf("Saindo do progama...");
    break;
    
    default:
    printf("Escolha um número válido!!!");
    break;
}



    return 0;
}
