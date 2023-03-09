#include <stdio.h>
#include <stdlib.h>

void main (){
    int n1,n2,n3,result;
    printf("Descubra a sua media!\n");
    printf("Digite 3 numeros para Saber sua Media.\n");
    scanf("%i%i%i", &n1, &n2,&n3);

    result = (n1 + n2 + n3) / 3;
    printf("Sua Media é a %i" , result);
}