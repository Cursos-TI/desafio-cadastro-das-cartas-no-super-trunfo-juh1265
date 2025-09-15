#include <stdio.h>
#include <string.h>

//definindo a struct para a carta
typedef struct{
    char estado;
    int populacao;
    int pontos_turisticos;
    char codigo[50];
    char nome[50];
    float area;
    float PIB;
   

}carta;

    int main(){
        carta carta1, carta2;
        float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    printf("Insira as Informações a cada tributo, Carta 1: \n"); //Dica do que o usuario deve fazer.
    printf("Estado: Insira uma Letra Para Estado de A a H: \n"); //Aqui o usuario coloca as informações na carta 1.
    scanf(" %c", &carta1.estado);

    printf("Código da Carta: Digite a Letra do estado seguida de um número 01 a 04:\n");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da Cidade: \n");
    getchar(); // limpa o buffer antes do fgets
    fgets(carta1.nome, 50, stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = 0;

    printf("Digite o número da população:\n");
    scanf("%d", &carta1.populacao);

    printf("Digite a Área por KM²:\n");
    scanf("%f", &carta1.area);

    printf("Digite o Número do PIB:\n");
    scanf("%f", &carta1.PIB);

    printf("Digite os Números de Pontos Turísticos na cidade:\n");
    scanf("%d", &carta1.pontos_turisticos);

    
    printf("\n Insira as informações de cada Tributo. Carta 2:\n"); //o usuario insere informações na carta 2


    printf("Estado: Insira uma Letra Para Estado de A a H: \n");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta: Digite a Letra do estado seguida de um número 01 a 04: \n");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da Cidade: \n");
    getchar();
    fgets(carta2.nome, 50, stdin);
    carta2.nome[strcspn(carta2.nome, "\n")] = 0;

    printf("Digite o número da população: \n");
    scanf("%d", &carta2.populacao);

    printf("Digite a Área por KM²: \n");
    scanf("%f", &carta2.area);

    printf("Digite o Número do PIB: \n");
    scanf("%f", &carta2.PIB);

    printf("Digite os Números de Pontos Turísticos na cidade: \n");
    scanf("%d", &carta2.pontos_turisticos);

    //calculando densidade populacional e Pib per capita. // Nivel Aventureiro//
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;
    pib_per_capita1 = carta1.PIB / carta1.populacao;
    pib_per_capita2 = carta2.PIB / carta2.populacao;


    printf("\nCarta 1:\n");     //informações fornecidas pelo usuario, carta 1.
    printf("Estado: %c\n",carta1.estado);
    printf("Código da Carta: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nome);
    printf("População: %d Habitantes\n", carta1.populacao);
    printf("Área: %.2f Km²\n", carta1.area);
    printf("PIB: %.2f Bilhões de Reais\n", carta1.PIB);
    printf("Número de pontos Turísticos: %d \n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes por Km²\n", densidade1);// adcionadas no nivel aventureiro
    printf("PIB per capita: %.2f Reais\n", pib_per_capita1);


    printf("\nCarta 2:\n"); //informações fornecidas pelo usuario, carta 2.
    printf("Estado: %c\n", carta2.estado);
    printf("Código da Carta: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nome);
    printf("População: %d Habitantes\n", carta2.populacao);
    printf("Área: %.2f Km²\n", carta2.area);
    printf("PIB: %.2f Bilhões de Reais\n", carta2.PIB);
    printf("Número de pontos turísticos: %d \n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes por Km²\n", densidade2);// Adcionadas no nivel aventureiro//
    printf("PIB per capita: %.2f Reais\n", pib_per_capita2);

    

    return 0;
}