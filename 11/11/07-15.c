#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float valor; 
    float resultado;

    while (1) {
        printf("\nEscolha uma op��o de convers�o:\n");
        printf("1. Converter quil�metros para milhas\n");
        printf("2. Converter Celsius para Fahrenheit\n");
        printf("3. Converter milhas para quil�metros\n");
        printf("4. Converter Fahrenheit para Celsius\n");
        printf("0. Sair do programa\n");
        printf("Op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Saindo do programa\n");
                return 0;
                case 1:
                printf("Digite a distancia em quil�metros: ");
                scanf("%f", &valor);
                resultado = valor * 0.621371;
                printf("%.2f quilômetros é igual a %.2f milhas.\n", valor, resultado);
                break;
                case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%f", &valor);
                resultado = (valor * 9/5) + 32;
                printf("%.2f graus Celsius é igual a %.2f Fahrenheit.\n", valor, resultado);
                break;
                case 3:
                printf("Digite a distância em milhas: ");
                scanf("%f", &valor);
                resultado = valor * 1,609344;
                printf("%.2f milhas � igual a %.2f quil�metros.\n", valor, resultado);
                break;
                case 4:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &valor);
                resultado = (valor - 32) * 9/5;
                printf("%.2f graus Fahrenheit � igual a %.2f graus Celsius .\n", valor, resultado);
                break;
                default:
                printf("Op��o inv�lida!\n");
                break;
        }
    }
}