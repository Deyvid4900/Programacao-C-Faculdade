#include <stdio.h>



int main()
{
    int tabuada = 0;
    int valor = 0;
    printf("\n Digite a tabuada que voce deseja :");
    scanf("%i",&tabuada);

    while (valor <= 30 )
    { 
        printf("\n %i vezes %i valor e : %i",tabuada,valor,tabuada*valor);
        valor++;
    }
    


}