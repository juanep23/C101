/*
EXEMPLO 6: Média semestral da UVV
Dados de Entrada:
  -> Nota do 1º Bimestre (0-10): B1
  -> Nota do 2º Bimestre (0-10): B2
*/

#include <stdio.h>

int main(void) {
  float B1, B2;
  
  printf("Digite a nota do 1º Bimestre: ");
    scanf("%f", &B1);
  printf("Digite a nota do 2º Bimestre: ");
    scanf("%f", &B2);

  printf("Sua Média Semestral da UVV é %.1f.\n", (B1+B2)/2);

 
  
  return 0;
}