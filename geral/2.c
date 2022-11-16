#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
      int main() {
            int p1;
            int p2;
            int resultado;
            int expressao_caso;

            printf("\nDigite\n");
            printf("\n1: soma\n");
            printf("\n2: subtracao\n");
            printf("\n3: divisao\n");
            printf("\n4: multiplicacao\n");

            printf("\nInforme sua escolha: ");
            scanf("%d", &expressao_caso);

            switch (expressao_caso)
            {
            case 1:
                  printf("\nInforme o primeiro valor: ");
                  scanf("%d", &p1);

                  printf("Informe o segundo valor: ");
                  scanf("%d", &p2);

                  resultado = p1 + p2;
                  
                  printf("%d", resultado);

            break;

            case 2:

            printf("\nInforme o primeiro valor: ");
                  scanf("%d", &p1);

                  printf("Informe o segundo valor: ");
                  scanf("%d", &p2);

                  resultado = p1 - p2;
                  
                  printf("%d", resultado);

            break;

            case 3: 

                  printf("\nInforme o primeiro valor: ");
                  scanf("%d", &p1);

                  printf("Informe o segundo valor: ");
                  scanf("%d", &p2);

                  resultado = p1/p2;
                  
                  printf("%d", resultado);
                  
            break;

            case 4: 

                  printf("\nInforme o primeiro valor: ");
                  scanf("%d", &p1);

                  printf("Informe o segundo valor: ");
                  scanf("%d", &p2);

                  resultado = p1 * p2;
                  
                  printf("%d", resultado);

            break;
            
            default:
                  break;
            }
      }