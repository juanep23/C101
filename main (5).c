/*
ALGORITIMO:
Escrever um algoritmo em C que leia a comprimento x de uma barra em centímetro e exiba na tela sua dimensão em:

*   Polegadas
*   pés

Sabendo que, 1 Polegada = 2.54 Centímetros = 0.08 pés (ft).
*/

#include <stdio.h>

int main(void) {
  float x;

  printf("Medida em cm: "); scanf("%f", &x);

  x = x / 2.54; //Polegadas
  printf("Medida em polegadas: %.2f\n", x);

  x = x * 0.08; //Pés
  printf("Medida em pés: %.2f", x); 
  return 0;
}