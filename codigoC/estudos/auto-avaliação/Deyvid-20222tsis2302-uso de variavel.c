
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    char nome[30];
    printf("Digite o seu nome: ");
    gets(nome);
    system("cls");
    printf("Bem vindo %s\n", nome);
    system("pause");
    return 0;
}