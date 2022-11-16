#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
      int main() {
            int opcao;

            printf("Digite 1 até 5 para escolher um material: ");
            scanf("%d", &opcao);

            switch (opcao)
            {
            case 1:
                  printf("\nParafuso");
                  printf("\nvalor: 0,15");

                  break;

                  case 2: 
                        printf("\nporca");
                        printf("\n0,05");
                  break;

                   case 3: 
                        printf("\nprego");
                        printf("\nvalor: 0,10");
                  break;

                   case 4: 
                        printf("\nmartelo");
                        printf("\n40,00");
                  break;

                  case 5:
                        printf("\ntomada");
                        printf("\nvalor:3,00");
                  break;

                
            default:
                  break;
            }
      }