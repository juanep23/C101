/*
l) Calcular e exibir a distância máxima (em Quilômetros) de autonomia de um carro que possui um tanque de combustível cúbico de lado (L) em metros e Altura (h) de preenchimento do tanque.
Sabendo que seu consumo é em média 10 km/litro e que 1 m3 = 1000 Litros.
*/

#include <stdio.h>

int main(void) {

  float largura, altura, profundidade, LAP, S;

  printf("DADOS DO TANQUE\n");
  printf("Largura: "); scanf("%f", &largura);
  printf("Altura: "); scanf("%f", &altura);
  printf("Profundidade: "); scanf("%f", &profundidade);

  LAP = (largura * altura * profundidade); //m^3
  LAP = LAP*1000; //converter de m^3 para L
  S = LAP*10; //cálculo da distância máxima 
    
  printf("Baseado na capacidade do tanque de combustível, a distância máxima de deslocamento do carro é %.2fKM", S);
  
  return 0;
}