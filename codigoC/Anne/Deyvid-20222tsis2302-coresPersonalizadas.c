#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc,char *argv[]){
//a linha abaixo configura o idioma para português
setlocale(LC_ALL,"Portuguese");
//a linha abaixo muda a cor do texto
system("color 5E");
printf("\nOla mundo\n");
system("pause");
//a linha abaixo limpa a tela
system("cls");
system("color F0");
printf("\nAluno Deyvid Oliveira Silva\n");
system("pause");
return(0);
}