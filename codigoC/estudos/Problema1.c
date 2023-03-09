#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int preco,nota50,nota10,nota1,resto,resto1,resto2,resto3;
    printf("\n Digite o Preco:");
    scanf("%i",&preco);
    nota50 = preco / 50;
    printf("\n A quantidade de notas de cinquenta sera de %i",nota50);
    resto = preco % 50;
    if(resto >= 10){
          resto1 = resto / 10 ;
         printf("\n A quantidade de notas de dez sera de %i",resto1);
        printf("\n A quantidade de notas de um sera de %i",resto%10);
        
    }    
}