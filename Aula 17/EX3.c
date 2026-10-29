/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char curso[40];
    char copianome[50];
    char mensagem[90] = "Olá, ";

    printf("===== CADASTRO DE PRODUTOSIDENTIFICAÇÃO ACADÊMICA====== \n");
    printf("Digite seu nome: ");
    scanf("%49s", nome);


    printf("Digite o código do curso (CC ou SI): ");
    scanf("%49s", curso);
    
    
    printf("===== RESULTADO ====== \n");
    
    strcpy(copianome, nome);
    printf("Estudante: %s\n", copianome);
    
        if ( strcasecmp(curso, "CC") == 0) { 
printf("Curso: Ciência da Computação.\n"); 
} else { 
printf("Curso: Sistema da Informação.\n"); 
} ;
 
   
  printf("Quantidade de caracteres: %zu\n", strlen(nome)); 

strcat(mensagem, nome); 
printf("%s!\n", mensagem); 
   return 0;
}