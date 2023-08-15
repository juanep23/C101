/*
EXEMPLO 7: 
OBJETIVOS: 1 - Total a pagar sem desconto
           2 - Total a pagar com desconto
Daddos de Entrada: 
           Preço (R$)
           Quantidade (unidade)
           Reajuste ( desconto em %)
*/

#include <stdio.h>

int main(void) {
  float preco, desconto, TSD, TCD;
  int quantidade;

  printf("DADOS DA MERCADORIA: \n");
  printf("Preço (R$): \n");        scanf("%f", &preco);
  printf("Quantidade (Unid): \n"); scanf("%i", &quantidade);
  printf("Reajuste (%%): \n");     scanf("%f", &desconto);

  TSD = preco * quantidade;
  //TCD = TSD - desconto / 100 * TSD;
  TCD = TSD * (1 - desconto / 100);

  printf("Total a pagar (sem desconto): R$ %.2f\n ", TSD);
  printf("Total a pagar (com desconto: %.1f%%): R$ %.2f", 
  desconto, TCD);

  
  return 0;
}