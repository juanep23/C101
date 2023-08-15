#include <stdio.h>

//ALGORITIMO: INPUT + ULA + OUTPUT

int main(void) {

//Exercício 1
/*
  float preco, total;
  int qnt;

  printf("Preço do produto(R$): "); scanf("%f", &preco);
  printf("Quantidade(Unid.): "); scanf("%d", &qnt);

  total = preco * qnt;
  
  if(total > 1000)
    //total = total * 0.97;
    total *= 0.97;
  
   

  printf("Total a pagar(R$): %.2f", total);
*/

//Exercício 2
/*
  int senha;

  printf("Digite uma senha de 4 dígitos: "); scanf("%i", &senha);

  if(senha < 1000 || senha > 9999)
    printf("Senha inválida. A senha deve ter exatamento 4 dígitos.\n");
  else{
      if(senha % 17 == 0 && senha % 2 != 0)
    printf("Senha forte\n");
  else
    printf("Senha fraca\n");
  }
*/

//Exercício 3
/*
  float b1, b2, media;

  printf("Nota do 1º Bimestre: "); scanf("%f", &b1);
  printf("Nota do 2º Bimestre: "); scanf("%f", &b2);

  media = (b1+b2)/2;

  printf("Média semestral: %.2f\n", media);
  
  if(media < 5)
    printf("\tReprovado");
  else
    printf("\tAprovado");
*/

//Exercício 4

  int idade;

  printf("Sua idade: "); scanf("%i", &idade);

  if(idade <= 14)
    printf("Fora da tabela.\n");
  else{
    if(idade <= 20)
      printf("Geração Z");
    else if (idade <= 34)
      printf("Geração Y");
    else if (idade <= 49)
      printf("Geração X");
    else if (idade <= 64)
      printf("Baby Boomers");
    else
      printf("Geração Silecionsa");
  }
  return 0;
}