#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

        int n;
        int result;

        
      int main() {
            float n1, n2, n3;
            float p1, p2, p3;
            float media;
            
            printf("Digite uma nota: ");
            scanf("%f", &n1);

            printf("Digite uma nota: ");
            scanf("%f", &n2);

            printf("Digite uma nota: ");
            scanf("%f", &n3);


            printf("\nInforme o peso na nota: ");
            scanf("%f", &p1);

            printf("\nInforme o peso na nota: ");
            scanf("%f", &p1);

            printf("\nInforme o peso na nota: ");
            scanf("%f", &p1);

           media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
            
            printf("%f", media);
            
      }