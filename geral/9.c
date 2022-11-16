#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
      int main() {
            int idade;

            printf("Digite sua idade: ");
            scanf("%d", &idade);

            if (idade >= 5 && idade < 7)
            {
                  printf("infantil++");
            }

            if (idade >= 8 && idade < 10)
            {
                  printf("infantil++");
            }

            if (idade >= 11 && idade < 13)
            {
                  printf("juvenil++");
            }

            if (idade >= 14 && idade < 17)
            {
                  printf("juvenil++");
            }

            if (idade >= 18)
            {
                  printf("adulto");
            }
            
      }