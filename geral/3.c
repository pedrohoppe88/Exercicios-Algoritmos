#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
      int main() {
            int opcao;
            int saldo;
            int adicionar;
            int resultado_final;
            int numero_cadastro;
            
            printf("\nDigite o seu saldo atual :");
            scanf("%d", &saldo);

            printf("Digite o seu numero de cadastro: ");
            scanf("%d", &numero_cadastro);

            printf("\nOpcoes:\n");
            printf("\n(1) Adicionar um valor a conta\n");
            printf("\n(2) Sacar um valor\n");
            printf("\n(3) Encerrar o programa\n");

            printf("\nInforme a opcao escolhida: ");
            scanf("%d", &opcao);

            switch (opcao)
            {
            case 1:
                  printf("\nQuanto voce deseja adicionar a sua conta: ");
                  scanf("%d", &adicionar);

                  resultado_final = saldo + adicionar;

                  printf("\nSaldo atual: %d", resultado_final);

                  break;
            
            default:
                  break;
            }


      }