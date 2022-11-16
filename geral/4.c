#include<stdio.h>
#include<conio.h>
      int main() {
            float c, f;

            printf("Insira o valor em graus celcios: ");
            scanf("%f", &c);

            f = (9 * c + 160) / 5;

            printf("%f", f);

      }