#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    char sim,nao,per1,per2,per3,per4,per5,per6,per7,per8,per9,per10,per11,per12,total;
    total = 0 ;
    printf("\nSaiba de vale apena afiliarser no produto\n");
    printf("\nTem Proposta unica de Vendas?\n");
    scanf("%c",&sim);
    if (sim="sim")
    {
        total+2;
    }else
    {
        total+0;
    };
    
    printf("\nTem Preço maximo e minimo? \n");
    scanf("%c",&per1);
    if (per1="sim")
    {
        total+2;
    }else
    {
        total+0;
    }
    
    printf("\nFaz conversão de boleto?\n ");
    scanf("%c",&per2);
    if (per2="sim")
    {
        total+5;
    }else
    {
        total+0;
    }
    
    printf("\nA comissão minima é maior ou igual a 45 porcento\n");
    scanf("%c",&sim);
    if (sim="sim")
    {
        total+2;
    }else
    {
        total+0;
    }
    
    printf("\nFaz parte dos 5 nichos poderosos? \n");
    scanf("%c",&sim);
    if (sim="sim")
    {
        total+5;
    }else
    {
        total+0;
    }
    
    printf("\nTem a pagina com delay e a pre-compra?\n");
    scanf("%c",&sim);
    if (sim="sim")
    {
        total+2;
    }else
    {
        total+0;
    }
    
    printf("\nTem versao responsiva?\n");
    scanf("%c",&sim);
    if (sim="sim")
    {
        total+5;
    }else
    {
        total+0;
    }
    
    printf("\nTem respostas as reclamacoes no reclame aqui?\n");
    scanf("%c",&sim);
    if (sim="sim")
    {
        total+2;
    }else
    {
        total+0;
    }
    
    printf("\nTem prova social(depoimento)\n");
    scanf("%c",&sim);
    if (sim="sim")
    {
        total+2;
    }else
    {
        total+0;
    }
    
    printf("\neficacia comprovada?\n");
    scanf("%c",&sim);
    if (sim="sim")
    {
        total+2;
    }else
    {
        total+0;
    }
    
    printf("\nupsells imediato?\n");
    scanf("%c",&sim);
    if (sim="sim")
    {
        total+3;
    }else
    {
        total+0;
    }
    
    
    
    if (total >= 24)
    {
        printf("\nEsse produto vale a pena\n");
    }
    else{
        printf("Melhor procurar outro produto");
    }
    
}