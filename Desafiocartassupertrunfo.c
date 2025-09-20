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
    int opcao;

    // Cadastro das cartas (mantido do desafio anterior)
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

    // Menu interativo
    printf("\n=== MENU DE COMPARAÇÃO DE CARTAS ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Nome do País (apenas exibe)\n");
    printf("Digite a opção desejada (1-7): ");
    scanf("%d", &opcao);

    printf("\nComparando as cartas:\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("Carta 2: %s\n", carta2.nome);

    switch (opcao) {
        case 1: // População
            printf("População:\nCarta 1: %lu\nCarta 2: %lu\n", carta1.populacao, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Carta 1 venceu!\n");
            else if (carta2.populacao > carta1.populacao)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 2: // Área
            printf("Área:\nCarta 1: %.2f Km²\nCarta 2: %.2f Km²\n", carta1.area, carta2.area);
            if (carta1.area > carta2.area)
                printf("Carta 1 venceu!\n");
            else if (carta2.area > carta1.area)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 3: // PIB
            printf("PIB:\nCarta 1: %.2f Bilhões de Reais\nCarta 2: %.2f Bilhões de Reais\n", carta1.PIB, carta2.PIB);
            if (carta1.PIB > carta2.PIB)
                printf("Carta 1 venceu!\n");
            else if (carta2.PIB > carta1.PIB)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 4: // Pontos Turísticos
            printf("Pontos Turísticos:\nCarta 1: %d\nCarta 2: %d\n", carta1.pontos_turisticos, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("Carta 1 venceu!\n");
            else if (carta2.pontos_turisticos > carta1.pontos_turisticos)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 5: // Densidade Demográfica (menor vence)
            printf("Densidade Demográfica:\nCarta 1: %.2f habitantes/km²\nCarta 2: %.2f habitantes/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Carta 1 venceu!\n");
            else if (densidade2 < densidade1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 6: // PIB per Capita
            printf("PIB per Capita:\nCarta 1: %.2f Reais\nCarta 2: %.2f Reais\n", pib_per_capita1, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2)
                printf("Carta 1 venceu!\n");
            else if (pib_per_capita2 > pib_per_capita1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;
        case 7: // Nome do País (apenas exibe)
            printf("Nome das cidades:\nCarta 1: %s\nCarta 2: %s\n", carta1.nome, carta2.nome);
            printf("Este atributo não é comparável.\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
