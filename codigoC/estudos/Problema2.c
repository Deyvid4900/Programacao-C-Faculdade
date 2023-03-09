#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int valor1,valor2,valor3,valor4;
    printf("\nDigite seu primeiro X valor ");
    scanf("%i",&valor1);
    printf("\nDigite seu segundo Y valor ");
    scanf("%i",&valor2);
    valor3 = valor1;
    valor4 = valor2;
    valor1 = valor4;
    valor2 = valor3;
    printf("O Seu valor de X que era: %i passou a ser : %i que era seu valor Y",valor2,valor1);
   
}
