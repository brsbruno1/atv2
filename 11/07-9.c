#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, num, cont = 0;

    printf("Digite um n√∫mero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
      
    }
      if (cont == 2)
        {
            printf("… primo\n");
        }
        else
        {
            printf("N„o È primo\n");
        }
    return 0;
}