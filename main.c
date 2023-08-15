#include <stdio.h>

//ALGORITIMO: ENTRADA(scanf) + PROCESSAMENTO (ULA) + SAÍDA(printf)

int main(void) {
  //Exemplo 1
  /*
  int   idade = 20;
  float temperatura = 20.8;
  printf("Meus dados:\n\n");  // \n pula uma (1) linha
  printf("Minha idade é %i anos.\n", idade);
  printf("A temperatura do lab é %.1f ºC.\n", temperatura);
  return 0; 
  */


  
  //Exemplo 2
  /*
  //ENTRADA: Declaração da variável + leitura dos dados de entrada
  int idade;
  float massa, temperatura;
  
  printf("Digite seus dados pessoais: \n");
  
  printf("Digite sua idade (em anos): ");
    scanf("%i", &idade);
  
  printf("Sua massa (em quilogramas): ");
    scanf("%f", &massa);
  
  printf("Sua temperatura em ºC: ");
    scanf("%f", &temperatura);

  //PROCESSAMENTO: ULA

  //SAÍDA
  printf("Sua idade %i anos. \n", idade);
  printf("Sua massa %.3f Kg. \n", massa);
  printf("Sua temperatura %.1f ºC. \n", temperatura); 
  */


  
  // Exemplo 3: Escreva um algorítimo que leia do usuário: O ano de sua formatura
  // e sua pretensão salarial em reais. Após isso, exiba esses valores na tela.

  /*
  int formatura; //em anos
  float salario; //em reais

  printf("Digite seu ano de formatura da Universidade: \n");
    scanf("%i", &formatura);

  printf("Digite sua pretensão salarial (em reais): \n\n\n");
    scanf("%f", &salario);

  printf("Seu ano de formatura é %i. \n", formatura);
  printf("Sua pretensão salarial é de %.2f reais. \n", salario);
  */
  

  // Exemplo 4: Processameto aritmético
  // Escreva um algorítimo que leia do usuário: n1 e n2 como números inteiros e
  // exiba na tela as seguintes operações: soma, subtração, multiplicação e divisão.

  int n1, n2;

  printf("n1 (inteiro): "); scanf("%i", &n1);
  printf("n2 (inteiro): "); scanf("%i", &n2);

  printf("Mini calculadora de inteiros: \n");
  printf("Soma:                     n1 + n2 = %i + %i = %i\n", n1, n2, n1+n2);
  printf("Subtração:                n1 - n2 = %i - %i = %i\n", n1, n2, n1-n2);
  printf("Multiplicação:            n1 * n2 = %i * %i = %i\n", n1, n2, n1*n2);  
  printf("Divisão:                  n1 / n2 = %i / %i = %.1f\n", n1, n2, 1.0*n1/n2);
  printf("Mod(resto inteiro):       n1 %% n2 = %i %% %i = %i\n", n1, n2, n1%n2);
  printf("Div(quociente inteiro):   n1 / n2 = %i / %i = %i\n", n1, n2, n1/n2);

  
  return 0;
}