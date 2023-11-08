#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float media, nota;
    int somaNotas = 0;
    int i;
    int qntNotas = 0;

    printf("Digite a quantidade de notas: \n");
    scanf("%d", &qntNotas);

    for (i = 1; i <= qntNotas; i++)
    {
        do
        {

            printf("Digite a %d nota: \n", i);
            scanf("%f", &nota);

        } while (nota < 0 || nota > 10);
        somaNotas+=nota;
    }

    media = somaNotas / (float)qntNotas;

    printf("Media: %.2f \n", media);

    return 0;
}