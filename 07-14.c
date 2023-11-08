#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int somapar = 0, somaimpar = 0, numero, par = 0, impar = 0, quantidade = 0;
    float mediapar = 0, mediaimpar = 0;

    do
    {
        printf("Digite o %d Numero: ", quantidade + 1);
        scanf("%d", &numero);
        
        if (numero % 2 == 0 && numero > 0)
        {
            par++;
            somapar += numero;
        }
        else if (numero % 2 != 0 && numero > 0)
        {
            impar++;
            somaimpar += numero;
        }
        quantidade++;
       
    } while (numero > 0);
        mediapar = somapar / (float)par;
        mediaimpar = somaimpar / (float)impar;
    printf("\nQuantidade de numeros Pares: %d\n", par);
    printf("Quantidade de numeros Impares: %d\n", impar);
    printf("Media dos Numeros Pares: %.2f\n",mediapar);
    printf("Media dos Numeros Impares: %.2f\n",mediaimpar);

    return 0;
}