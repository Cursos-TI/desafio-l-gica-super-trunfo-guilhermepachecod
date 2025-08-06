#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Interatividade e Comparação com Menu
// Nível: Aventureiro

int main() {
    // Variáveis da Carta 1
    char estado1[30];
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Variáveis da Carta 2
    char estado2[30];
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    int opcao; // opção escolhida pelo jogador

    // Leitura dos dados da Carta 1
    printf("Estado 1: ");
    scanf(" %[^\n]", estado1);
    printf("Código 1: ");
    scanf("%s", codigo1);
    printf("Cidade 1: ");
    scanf(" %[^\n]", cidade1);
    printf("População 1: ");
    scanf("%lu", &populacao1);
    printf("Área 1 (em km²): ");
    scanf("%f", &area1);
    printf("PIB 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos 1: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("Estado 2: ");
    scanf(" %[^\n]", estado2);
    printf("Código 2: ");
    scanf("%s", codigo2);
    printf("Cidade 2: ");
    scanf(" %[^\n]", cidade2);
    printf("População 2: ");
    scanf("%lu", &populacao2);
    printf("Área 2 (em km²): ");
    scanf("%f", &area2);
    printf("PIB 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // Menu interativo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s\n", cidade1, cidade2);

    // Switch para decidir qual atributo comparar
    switch(opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", cidade1, pontosTuristicos1);
            printf("%s: %d\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade Populacional (menor vence)
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 6: // PIB per capita
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f reais\n", cidade1, pibPerCapita1);
            printf("%s: %.2f reais\n", cidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Por favor, execute novamente e escolha um número de 1 a 6.\n");
    }

    return 0;
}
