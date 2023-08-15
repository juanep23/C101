/*
Faça um algoritmo em C que leia:

⟼  Medidas de um Tanque de combustível - LAP (em metros) float (3 decimais)

⟼  Preço do Álcool e Gasolina (em litros). float (3 decimais)

e exiba na tela o total a ser pago para encher este tanque de combustível:

⟼  Somente com gasolina; float (3 decimais)

⟼  Somente com Álcool; float (3 decimais)

⟼  na proporção: 20% de Álcool e 80% de Gasolina.

(Sabendo que,  1m^3 = 1000L .)
*/

#include <stdio.h>

int main(void) {
  float largura, altura, profundidade, LAP, alcool, gasolina, precog, precoal, precoflex;
  
  printf("DADOS DO TANQUE\n");
  printf("Largura: "); scanf("%f", &largura);
  printf("Altura: "); scanf("%f", &altura);
  printf("Profundidade: "); scanf("%f", &profundidade);

  LAP = (largura * altura * profundidade); //m^3
  LAP = LAP*1000; //converter de m^3 para L

  printf("Capacidade do tanque(em L): %.3f\n", LAP);
  
  printf("PREÇO DO COMBUSTÍVEL\n");
  printf("Álcool: "); scanf("%f", &alcool);
  printf("Gasolina: "); scanf("%f", &gasolina);

  precog = LAP * gasolina; //preço total da gasolina
  precoal = LAP * alcool; //preço total do alcool
  precoflex = LAP * (1*(alcool * 0.2) + 1*(gasolina * 0.8)); //preço total flex

  printf("Total para encher o tanque com gasolina: R$%.3f\n", precog);
  printf("Total para encher o tanque com álcool: R$%.3f\n", precoal);
  printf("Total para encher o tanque com álcool e gasolina: R$%.3f\n", precoflex);
  return 0;
}