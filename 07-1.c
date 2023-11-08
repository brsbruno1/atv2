#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
  int graus;

  printf("Qual a temperatura: ");
  scanf("%d",&graus);
  if (graus > 25)
  {
    printf("Clima ensolarado");
  }else if (graus > 15 && graus < 25)
  {
    printf("Clima nublado");
  }else{
    printf("Clima chuvoso");
  }
  
  

 return 0;
}    