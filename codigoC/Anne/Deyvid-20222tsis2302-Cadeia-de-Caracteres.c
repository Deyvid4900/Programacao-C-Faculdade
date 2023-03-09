#include <stdio.h>
int main (){
 
char string[100];
printf ("Digite uma string: ");
gets (string);
printf ("\n\nVoce digitou %s",string);
printf("\nSegunda letra: %c", string[1]);


char stri[100];
printf ("\nDigite uma outra string: ");
gets (stri);
printf ("\n\nVoce digitou %s",stri);
printf("\nSegunda letra: %c", stri[1]);


return(0);




}