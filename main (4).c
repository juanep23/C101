#include <stdio.h>

int main(void) {
  float preco, reajuste, TCD, TSD;
  int quantidade;

  printf("DADOS DO PRODUTO \n");
  printf("Preço(R$): "); scanf("%f", &preco);
  printf("Quantidade(Unid.): "); scanf("%d", &quantidade);
  printf("Reajuste(%%): "); scanf("%f", &reajuste);

  TSD = preco * quantidade;
  TCD = TSD - reajuste / 100 * TSD;
  TCD = TSD * (1 - reajuste / 100);

  printf("Total a pagar sem desconto: R$%.2f\n", TSD);
  printf("Total a pagar com desconto(%.2f%%): R$%.2f\n", reajuste, TCD);
  
  return 0;
}