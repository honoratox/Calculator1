/*
  author: @Pedro Honorato
*/
#include <stdio.h>

int main() {
    int op; // escolha da opção de cálculo
    int n;  // quantidade de valores
    float resultado = 0;
    float num;

    // entrada de dados
    printf("\n Bem vindo a calculadora!");
    printf("\n Digite o valor correspondente ao cálculo que deseja fazer");
    printf("\n 1- Soma\n 2- Subtracao\n 3- Multiplicacao\n 4- Divisao\n Opcao: ");
    scanf("%d", &op);

    printf("\n Digite quantos valores deseja inserir para calcular: ");
    scanf("%d", &n);

    if (op == 1) {
        for (int i = 0; i < n; i++) {
            printf("\n Digite o valor: ");
            scanf("%f", &num);
            resultado += num;
        }
        printf("\n A soma dos termos eh: %.2f", resultado);
    } else if (op == 2) {
        printf("\n Digite o valor: ");
        scanf("%f", &num);
        resultado = num;

        for (int i = 1; i < n; i++) {
            printf("\n Digite o valor: ");
            scanf("%f", &num);
            resultado -= num;
        }
        printf("\n A subtracao dos termos eh: %.2f", resultado);
    } else if (op == 3) {
        resultado = 1;

        for (int i = 0; i < n; i++) {
            printf("\n Digite o valor: ");
            scanf("%f", &num);
            resultado *= num;
        }
        printf("\n A multiplicacao dos termos eh: %.2f", resultado);
    } else if (op == 4) {
        printf("\n Digite o valor: ");
        scanf("%f", &num);
        resultado = num;

        for (int i = 1; i < n; i++) {
            printf("\n Digite o valor: ");
            scanf("%f", &num);
            
            if (num != 0) {
                resultado /= num;
            } else {
                printf("Erro: divisao por zero.");
                return 1; 
            }
        }
        printf("\n A divisao dos termos eh: %.2f", resultado);
    } else {
        printf("\n Opcao invalida.");
        return 1; 
    }

    return 0; 
}
