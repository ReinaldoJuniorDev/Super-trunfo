#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4];
    char estado1[30], estado2[30];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    int superPoder1 = 0, superPoder2 = 0;

    // Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Código: ");
    scanf("%3s", codigo1);

    printf("Estado (sigla): ");
    scanf(" %[^\n]", estado1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em reais): ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Código: ");
    scanf("%3s", codigo2);

    printf("Estado (sigla): ");
    scanf(" %[^\n]", estado2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em reais): ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Super Poder
    if (populacao1 > 1000000) superPoder1++;
    if (area1 > 500) superPoder1++;
    if (pib1 > 1000000000) superPoder1++;
    if (pontos1 > 5) superPoder1++;
    if (densidade1 < 1000) superPoder1++;
    if (pibPerCapita1 > 30000) superPoder1++;

    if (populacao2 > 1000000) superPoder2++;
    if (area2 > 500) superPoder2++;
    if (pib2 > 1000000000) superPoder2++;
    if (pontos2 > 5) superPoder2++;
    if (densidade2 < 1000) superPoder2++;
    if (pibPerCapita2 > 30000) superPoder2++;

    // Exibição
    printf("\nCarta 1 (%s):\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %d\n", superPoder1);

    printf("\nCarta 2 (%s):\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %d\n", superPoder2);

    // Comparações
    printf("\nComparações:\n");
    printf("População: %s\n", populacao1 > populacao2 ? cidade1 : cidade2);
    printf("Área: %s\n", area1 > area2 ? cidade1 : cidade2);
    printf("PIB: %s\n", pib1 > pib2 ? cidade1 : cidade2);
    printf("Pontos Turísticos: %s\n", pontos1 > pontos2 ? cidade1 : cidade2);
    printf("Densidade (menor vence): %s\n", densidade1 < densidade2 ? cidade1 : cidade2);
    printf("PIB per Capita: %s\n", pibPerCapita1 > pibPerCapita2 ? cidade1 : cidade2);
    printf("Super Poder: %s\n", superPoder1 > superPoder2 ? cidade1 : cidade2);

    return 0;
}