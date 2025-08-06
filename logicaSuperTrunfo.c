#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[30], codigo1[10], cidade1[50];
    unsigned long int populacao1;
    double area1, pib1, densidade1, pibPerCapita1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2[30], codigo2[10], cidade2[50];
    unsigned long int populacao2;
    double area2, pib2, densidade2, pibPerCapita2;
    int pontosTuristicos2;

    int opcao;

    // Leitura dos dados da Carta 1
    printf("Estado 1: ");
    scanf(" %[^\n]", estado1);

    printf("Código 1: ");
    scanf(" %s", codigo1);

    printf("Cidade 1: ");
    scanf(" %[^\n]", cidade1);

    printf("População 1: ");
    scanf("%lu", &populacao1);

    printf("Área 1 (em km²): ");
    scanf("%lf", &area1);

    printf("PIB 1 (em bilhões): ");
    scanf("%lf", &pib1);

    printf("Pontos Turísticos 1: ");
    scanf("%d", &pontosTuristicos1);

    // Limpa o buffer
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    // Leitura dos dados da Carta 2
    printf("Estado 2: ");
    scanf(" %[^\n]", estado2);

    printf("Código 2: ");
    scanf(" %s", codigo2);

    printf("Cidade 2: ");
    scanf(" %[^\n]", cidade2);

    printf("População 2: ");
    scanf("%lu", &populacao2);

    printf("Área 2 (em km²): ");
    scanf("%lf", &area2);

    printf("PIB 2 (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Pontos Turísticos 2: ");
    scanf("%d", &pontosTuristicos2);
    while ((ch = getchar()) != '\n' && ch != EOF);

    // Cálculo da Densidade Populacional
    densidade1 = (area1 != 0) ? (double)populacao1 / area1 : 0.0;
    densidade2 = (area2 != 0) ? (double)populacao2 / area2 : 0.0;

    // Cálculo do PIB per capita
    pibPerCapita1 = (populacao1 != 0) ? (pib1 * 1000000000.0) / populacao1 : 0.0;
    pibPerCapita2 = (populacao2 != 0) ? (pib2 * 1000000000.0) / populacao2 : 0.0;

    // Menu
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s:\n", cidade1, cidade2);

    switch(opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Área:\n");
            printf("%s: %.2lf km²\n", cidade1, area1);
            printf("%s: %.2lf km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("PIB:\n");
            printf("%s: %.2lf bilhões\n", cidade1, pib1);
            printf("%s: %.2lf bilhões\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s: %d\n", cidade1, pontosTuristicos1);
            printf("%s: %d\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Densidade Populacional:\n");
            printf("%s: %.2lf hab/km²\n", cidade1, densidade1);
            printf("%s: %.2lf hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("PIB per Capita:\n");
            printf("%s: %.2lf reais\n", cidade1, pibPerCapita1);
            printf("%s: %.2lf reais\n", cidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
