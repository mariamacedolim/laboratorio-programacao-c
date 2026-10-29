/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h> 
int main(void) { 
char nome[50]; 
char perfil[40];
char copianome[50];
char mensagem[60] = "Bem-vindo, ";

printf( "===== CADASTRO DE USUÁRIOS======= \n");


printf("Digite seu primeiro nome: "); 
scanf("%49s", nome); 
printf("Digite o perfil: "); 

scanf("%s", perfil);

printf("====== DADOS CADASTRADOS===== \n");

strcpy(copianome, nome); 
printf("Nome: %s\n", copianome);
if (strcmp(perfil, "ADMIN") == 0 ||strcmp(perfil, "admin") || strcmp(perfil, "Admin") ) { 
printf("Perfil: Administrador.\n"); 
} else { 
printf("Perfil diferente de administrador.\n"); 
}
printf("Quantidade de caracteres: %zu\n", strlen(nome)); 

strcat(mensagem, nome); 
printf("%s!\n", mensagem); 
printf("Cadastro Realizado com sucesso!");




return 0; 
} 