#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
// neste programa tem que usar o arquivo de include string.h por causa da função
// strcmp, cuja função é comparar duas strings.
 int main()
 {
      char estado[3];
      printf("Informe a sigla de um estado do Brasil: ");
      // gets(sigla);
      scanf("%s", estado);
      if(!strcmp(estado,"MG") || !strcmp(estado,"mg"))
      printf("Mineiro\n");
      else
      if(!strcmp(estado,"RJ") || !strcmp(estado,"rj"))
      printf("Carioca\n");
      else
      if(!strcmp(estado,"SP") || !strcmp(estado,"sp"))
      printf("Paulista\n");
      else
      printf("Outros estados\n");
      printf("\n");
      system("pause");
      return 0;
      }
