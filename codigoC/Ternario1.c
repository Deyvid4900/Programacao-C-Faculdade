
#include <stdio.h>
#include <stdlib.h>


/*utilizando o Operador Ternário
int num = (caractere=='a') ? 65 : 66;*/

/*utilizando a instrução "if"
if (caractere=='a')
    num = 65
else
    num = 66;*/


int main (void )
{
  int num;

  printf("Informe um numero: ");
  scanf("%d", &num);

  int num2;
  num2 = (num < 0) ? 0 : num;
  //num >= 0 ? num++ : num--;

  printf("O valor de num2 e: %d \n\n", num2);

  return 0;
}

