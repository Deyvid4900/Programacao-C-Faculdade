#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um caractere entre A ate G: ");
    char caractere = 0;
    scanf("%c", &caractere);
    int codigo = 0;

    codigo = (caractere=='A') ? 65 :
             (caractere=='B') ? 66 :
             (caractere=='C') ? 67 :
             (caractere=='D') ? 68 :
             (caractere=='E') ? 69 :
             (caractere=='F') ? 70 :
             (caractere=='G') ? 71 : -1;

    printf("O codigo ASCII da letra digitada eh: %i", codigo);

    return 0;
}