#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
      int verifica (int n2) {
            int par;
            int impar;

            if (n2 % 2 == 0)
            {
                  par = 1;
                  return par;
            }else {
                impar = 0;
                return impar;
            }
            
      }
      
      int main() {
            int n1;
            int resultado;
            printf("\nDigite um valor: \n");
            scanf("%d", &n1);

            resultado = verifica(n1);

            printf("%d", resultado);


      }