#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
      int conta( char *letrasM[10]) {
         int contador = strlen(letrasM);
         return contador;
      }

      int main() {
            int contL;
            char string[10];
            char *ponteiro1;

            printf("\nDigite uma palavra: ");
            scanf("%s", string);

            printf("%s", string);

            ponteiro1 = &string;
            
            printf("\n%d", contL);

            contL = conta(ponteiro1);

            printf("\n%d", contL);

      }