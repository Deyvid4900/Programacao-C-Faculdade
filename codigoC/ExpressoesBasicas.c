#include<stdio.h>
#include<stdlib.h>

/*
 int soma = 1 + 10;
int subtracao = 10 - 1;
int multiplicacao = 20 * 50;
double divisao = 10 * 3; 
*/
int main () {
    
    int num1, num2;
    num1 = 15;
    num2 = 20;

    int soma = num1 + num2;
    printf( "O resultado da soma e: %i\n", soma );

    int subtracao = num2 - num1;
    printf( " O resultado da subtracao e: %i\n", subtracao );


    int multi = num1 * num2;
    printf( " O resultado da multiplicacao: %i\n", multi );

    int div = num2 / 3;
    printf( " O resultado da divisao:  %i\n", div );

    return 0;

}



 