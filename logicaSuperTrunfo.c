#include <stdio.h>

int main() {
    char estado1[30], codigo1[10], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibPerCapita1;
    int pontosTuristicos1;

    char estado2[30], codigo2[10], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPerCapita2;
    int pontosTuristicos2;

    int opcao1, opcao2;
    int ch;

    printf("Estado 1: ");
    scanf(" %[^"]", estado1);

    printf("Código 1: ");
    scanf(" %s", codigo1);

    printf("Cidade 1: ");
    scanf(" %[^"]", cidade1);

    printf("População 1: ");
    scanf("%lu", &populacao1);

    printf("Área 1: ");
    scanf("%f", &area1);

    printf("PIB 1: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos 1: ");
    scanf("%d", &pontosTuristicos1);

    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Estado 2: ");
    scanf(" %[^"]", estado2);

    printf("Código 2: ");
    scanf(" %s", codigo2);

    printf("Cidade 2: ");
    scanf(" %[^"]", cidade2);

    printf("População 2: ");
    scanf("%lu", &populacao2);

    printf("Área 2: ");
    scanf("%f", &area2);

    printf("PIB 2: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos 2: ");
    scanf("%d", &pontosTuristicos2);

    while ((ch = getchar()) != '\n' && ch != EOF);

    densidade1 = (area1 != 0) ? populacao1 / area1 : 0;
    densidade2 = (area2 != 0) ? populacao2 / area2 : 0;

    pibPerCapita1 = (populacao1 != 0) ? (pib1 * 1000000000.0) / populacao1 : 0;
    pibPerCapita2 = (populacao2 != 0) ? (pib2 * 1000000000.0) / populacao2 : 0;

    printf("\nAtributos disponíveis para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");

    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &opcao2);
    } while (opcao2 == opcao1);

    float valor1A = 0, valor1B = 0;
    float valor2A = 0, valor2B = 0;

    switch(opcao1) {
        case 1: valor1A = populacao1; valor2A = populacao2; break;
        case 2: valor1A = area1; valor2A = area2; break;
        case 3: valor1A = pib1; valor2A = pib2; break;
        case 4: valor1A = pontosTuristicos1; valor2A = pontosTuristicos2; break;
        case 5: valor1A = 1.0 / densidade1; valor2A = 1.0 / densidade2; break;
        case 6: valor1A = pibPerCapita1; valor2A = pibPerCapita2; break;
        default: printf("Atributo inválido\n"); return 1;
    }

    switch(opcao2) {
        case 1: valor1B = populacao1; valor2B = populacao2; break;
        case 2: valor1B = area1; valor2B = area2; break;
        case 3: valor1B = pib1; valor2B = pib2; break;
        case 4: valor1B = pontosTuristicos1; valor2B = pontosTuristicos2; break;
        case 5: valor1B = 1.0 / densidade1; valor2B = 1.0 / densidade2; break;
        case 6: valor1B = pibPerCapita1; valor2B = pibPerCapita2; break;
        default: printf("Atributo inválido\n"); return 1;
    }

    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;

    printf("\nComparando %s e %s:\n", cidade1, cidade2);
    printf("Soma dos atributos selecionados:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2) {
        printf("%s venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("%s venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
