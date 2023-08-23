/*
  author: @Pedro Honorato
*/
#include <stdio.h>
#include <math.h>

int main(){
  int n; // escolha da opção de cálculo
  float num1; // variáveis para a soma
  float num2; // variáveis para a soma
  float soma, sub, mult, div; // op de cálculo

  //entrada de dados
  printf("\n Bem vindo a calculadora!");
  printf("\n Digite o valor correspondente ao calculo que deseja fazer");
  printf("\n 1- Soma\n 2- Subtracao\n 3- Multiplicacao\n 4- Divisao\n Opcao: ");
  scanf("%d", &n);
  //operações matemáticas
  if (n==1){
    printf("\n Digite os valores pra somar: ");
    scanf("%f %f", &num1, &num2);

    soma = num1+num2;
    printf("\n A soma de %0.2f+%0.2f eh: %0.2f", num1, num2, soma);
  }
  if (n==2){
    printf("\n Digite os valores pra subtrair: ");
    scanf("%f %f", &num1, &num2);

    sub = num1-num2;
    printf("\n A subtracao de %0.2f-%0.2f eh: %0.2f", num1, num2, sub);
  }
  if (n==3){
    printf("\n Digite os valores pra multiplicar: ");
    scanf("%f %f", &num1, &num2);

    mult = num1*num2;
    printf("\n A multiplicacao de %0.2fx%0.2f eh: %0.2f", num1, num2, mult);
  }
  if (n==4){
    printf("\n Digite os valores pra dividir: ");
    scanf("%f %f", &num1, &num2);

    div = num1/num2;
    printf("\n A divisao de %0.2f/%0.2f eh: %0.2f", num1, num2, div);
  }

  return 0;
}
