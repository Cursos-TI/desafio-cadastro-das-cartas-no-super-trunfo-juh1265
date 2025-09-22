#include <stdio.h>

int main(){
    int i;
    int opcao;
    char nome[20], Torre, Bispo, Rainha;

    printf("\n****Olá, Vamos Movimentar nossas peças de xadrez.****\n");
    printf("Escolha qual peça quer mover:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:
            printf("Você escolheu a peça Torre. \n");
            printf("A Torre pode se mover na horizontal ou Vertical. 5 casas.\n");
            for (int i = 0; i < 5; i++) {
                printf("Direita \n");
            }
            break;

        case 2:
            printf("Você escolheu a Peça Bispo. \n");
            printf("O Bispo pode se mover na diagonal em 5 Casas: \n");

            int contadorBispo = 1;
            while (contadorBispo <= 5)
            {
                printf("Cima, Direita\n");
                contadorBispo++;
            }
            break;

        case 3:
            printf("Você escolheu a peça Rainha. \n");
            printf("A rainha pode se mover na diagonal, Horizontal e vertical.\n");
            int contadorRainha = 1;
            do {
                printf("Esquerda\n");
                contadorRainha++;

            } while (contadorRainha <= 8);
            break;
    }

    return 0;
}