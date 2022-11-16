#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
      int soma(int a, int b) {
            int result;
            result = a + b;

            return result;
      }
      
      int main() {
            int v1;
            int v2;
            int r;
            printf("\nDigite um valor:");
            scanf("%d", &v1);

            printf("\nDigite um valor:");
            scanf("%d", &v2);

            r = soma(v1, v2);

            printf("%d", r);

      }