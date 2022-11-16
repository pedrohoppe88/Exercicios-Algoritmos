
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
      int main() {
            float n1, n2;
            float media;
            int faltas;

            printf("\nDigite a primeira hora: ");
            scanf("%f", &n1);

            printf("\nDigite a segunda hora: ");
            scanf("%f", &n2);

            printf("\nInforme as faltas dos alunos: ");
            scanf("%d", &faltas);

            media = n1 + n2/2;

            if (media >= 7 && faltas < 20)
            {
                  printf("Voce esta passado!!");
            }else {
                  printf("Voce esta reprovado");
            }            

      }