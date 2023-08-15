#include <stdio.h>

//ALGORÍTIMO: ENTRADA + PROCESSAMENTO + SAÍDA

int main(void) {

  /* 
  Exemplo 5: 
  Objetivo: Relação Cintura-Quadril (em%)
  */

  //ENTRADA: Declaração + Ler (scanf)
    float MC, MQ;

    printf("Digite a medida da sua cintura em centímetros: ");
      scanf("%f", &MC);

    printf("Digite a medida do seu quadril em centímetros: ");
      scanf("%f", &MQ);

    printf("Sua relação cintura-quadril (em %) é %.1f%%\n", MC/MQ*100);
  


  return 0;
}