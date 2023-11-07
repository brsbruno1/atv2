#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
 
 int num;
 printf("Digite um número: ");
 scanf("%d",&num);

 do
 {
    printf("Contagem regreciva: %d\n", num);
    num -= 1;
 } while (num > -1);
 

    return 0;
}