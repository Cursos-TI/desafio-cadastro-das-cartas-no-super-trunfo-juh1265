#include <stdio.h>
#include <string.h>

// Definindo a struct para a carta
typedef struct {
    char estado;
    unsigned long int populacao;
    int pontos_turisticos;
    char codigo[50];
    char nome[50];
    float area;
    float PIB;
    float super_poder;
} carta;

int main() {
    carta carta1, carta2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    int v_populacao, v_area, v_pib, v_pontos, v_densidade, v_pib_per_capita, v_super_poder;

    printf("Insira as Informações a cada tributo, Carta 1:\n");
    printf("Estado: Insira uma Letra Para Estado de A a H:\n");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta: Digite a Letra do estado seguida de um número 01 a 04:\n");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da Cidade:\n");
    getchar();
    fgets(carta1.nome, 50, stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = 0;

    printf("Digite o número da população:\n");
    scanf("%ld", &carta1.populacao);

    printf("Digite a Área por KM²:\n");
    scanf("%f", &carta1.area);

    printf("Digite o Número do PIB:\n");
    scanf("%f", &carta1.PIB);

    printf("Digite os Números de Pontos Turísticos na cidade:\n");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\nInsira as informações de cada Tributo. Carta 2:\n");
    printf("Estado: Insira uma Letra Para Estado de A a H:\n");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta: Digite a Letra do estado seguida de um número 01 a 04:\n");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da Cidade:\n");
    getchar();
    fgets(carta2.nome, 50, stdin);
    carta2.nome[strcspn(carta2.nome, "\n")] = 0;

    printf("Digite o número da população:\n");
    scanf("%ld", &carta2.populacao);

    printf("Digite a Área por KM²:\n");
    scanf("%f", &carta2.area);

    printf("Digite o Número do PIB:\n");
    scanf("%f", &carta2.PIB);

    printf("Digite os Números de Pontos Turísticos na cidade:\n");
    scanf("%d", &carta2.pontos_turisticos);

    // Calculando densidade populacional e PIB per capita
    densidade1 = carta1.populacao / carta1.area;
    densidade2 = carta2.populacao / carta2.area;
    pib_per_capita1 = carta1.PIB / carta1.populacao;
    pib_per_capita2 = carta2.PIB / carta2.populacao;

    // Calculando Super Poder
    // Super Poder = soma dos atributos numéricos + PIB per capita + inverso da densidade populacional
    carta1.super_poder = (float)carta1.populacao + carta1.area + carta1.PIB + (float)carta1.pontos_turisticos + pib_per_capita1 + (1.0f / densidade1);
    carta2.super_poder = (float)carta2.populacao + carta2.area + carta2.PIB + (float)carta2.pontos_turisticos + pib_per_capita2 + (1.0f / densidade2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código da Carta: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nome);
    printf("População: %lu Habitantes\n", carta1.populacao);
    printf("Área: %.2f Km²\n", carta1.area);
    printf("PIB: %.2f Bilhões de Reais\n", carta1.PIB);
    printf("Número de pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes por Km²\n", densidade1);
    printf("PIB per capita: %.2f Reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", carta1.super_poder);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código da Carta: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nome);
    printf("População: %lu Habitantes\n", carta2.populacao);
    printf("Área: %.2f Km²\n", carta2.area);
    printf("PIB: %.2f Bilhões de Reais\n", carta2.PIB);
    printf("Número de pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes por Km²\n", densidade2);
    printf("PIB per capita: %.2f Reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", carta2.super_poder);

    // Comparações
    printf("\nComparação de Cartas:\n");

    v_populacao = carta1.populacao > carta2.populacao ? 1 : 0;
    printf("População: Carta %d venceu (%d)\n", v_populacao ? 1 : 2, v_populacao);

    v_area = carta1.area > carta2.area ? 1 : 0;
    printf("Área: Carta %d venceu (%d)\n", v_area ? 1 : 2, v_area);

    v_pib = carta1.PIB > carta2.PIB ? 1 : 0;
    printf("PIB: Carta %d venceu (%d)\n", v_pib ? 1 : 2, v_pib);

    v_pontos = carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 0;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", v_pontos ? 1 : 2, v_pontos);

    v_densidade = densidade1 < densidade2 ? 1 : 0;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", v_densidade ? 1 : 2, v_densidade);

    v_pib_per_capita = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
    printf("PIB per Capita: Carta %d venceu (%d)\n", v_pib_per_capita ? 1 : 2, v_pib_per_capita);

    v_super_poder = carta1.super_poder > carta2.super_poder ? 1 : 0;
    printf("Super Poder: Carta %d venceu (%d)\n", v_super_poder ? 1 : 2, v_super_poder);

    return 0;
}