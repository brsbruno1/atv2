#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float precofinal, desconto, precodacompra;
    int dia;
    // VocÃª Ã© um desenvolvedor de e-commerce e estÃ¡ trabalhando em um novo sistema de descontos. O sistema oferece um desconto de 10%
    // para compras acima de R$ 100,00 se a compra for feita em um dia de semana. Se a compra for feita em um fim de semana, o desconto
    // serÃ¡ de 15% sobre o valor da compra acima de R$ 100,00.
    printf("Dias da Semana\nSegunda | 1\nTerçaa | 2\nQuarta | 3\nQuinta | 4\nSexta | 5\nSábado | 6\nDomingo | 7\n");
    printf("PreÃ§o da conta: ");
      printf("Dia da semana: ");
    printf("Digite o Dia: ");
    scanf("%d",&dia);
    printf("Digite o preço da compra: ");
    scanf("%f", &precodacompra);
    fflush(stdin);

   
    if (precodacompra > 100)
    {

        switch (dia)
        {
        case 1:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 2:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 3:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 4:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 5:
            desconto = precodacompra * 0.1;
            precofinal = precodacompra - desconto;
            break;
        case 6:
            desconto = precodacompra * 0.15;
            precofinal = precodacompra - desconto;
            break;
        case 7:
            desconto = precodacompra * 0.15;
            precofinal = precodacompra - desconto;
            break;

        default:
            break;
        }
    }
    else
    {
        precofinal = precodacompra;
    }
    printf("\nPreÃ§o final R$:%.2f",precofinal);
    return 0;
}
