#include <stdio.h>
#include <string.h>

struct Carta {
    char nome[50];
    char estado[3]; // Ex: "SP", "RJ", "CE"
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    int superPoder;
};

float calcularDensidade(int populacao, float area) {
    return populacao / area;
}

float calcularPIBPerCapita(float pib, int populacao) {
    return pib / populacao;
}

int calcularSuperPoder(struct Carta c) {
    int poder = 0;
    if (c.populacao > 1000000) poder++;
    if (c.area > 500.0) poder++;
    if (c.pib > 1000000000.0) poder++;
    if (c.pontosTuristicos > 5) poder++;
    if (c.densidade < 1000.0) poder++;
    if (c.pibPerCapita > 30000.0) poder++;
    return poder;
}

int main() {
    struct Carta carta1, carta2;

    // Entrada da carta 1
    printf("Digite o nome da cidade 1: ");
    fgets(carta1.nome, 50, stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = '\0';

    printf("Estado (sigla, ex: SP): ");
    fgets(carta1.estado, 3, stdin);
    getchar(); // Limpa o \n do buffer

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em reais): ");
    scanf("%f", &carta1.pib);

    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidade = calcularDensidade(carta1.populacao, carta1.area);
    carta1.pibPerCapita = calcularPIBPerCapita(carta1.pib, carta1.populacao);
    carta1.superPoder = calcularSuperPoder(carta1);

    getchar(); // Limpa o buffer

    // Entrada da carta 2
    printf("\nDigite o nome da cidade 2: ");
    fgets(carta2.nome, 50, stdin);
    carta2.nome[strcspn(carta2.nome, "\n")] = '\0';

    printf("Estado (sigla, ex: RJ): ");
    fgets(carta2.estado, 3, stdin);
    getchar(); // Limpa o \n do buffer

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em reais): ");
    scanf("%f", &carta2.pib);

    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidade = calcularDensidade(carta2.populacao, carta2.area);
    carta2.pibPerCapita = calcularPIBPerCapita(carta2.pib, carta2.populacao);
    carta2.superPoder = calcularSuperPoder(carta2);

    // Comparação
    printf("\nComparação:\n");
    printf("População: %s (%s)\n", carta1.populacao > carta2.populacao ? carta1.nome : carta2.nome,
                                     carta1.populacao > carta2.populacao ? carta1.estado : carta2.estado);
    printf("Área: %s (%s)\n", carta1.area > carta2.area ? carta1.nome : carta2.nome,
                              carta1.area > carta2.area ? carta1.estado : carta2.estado);
    printf("PIB: %s (%s)\n", carta1.pib > carta2.pib ? carta1.nome : carta2.nome,
                             carta1.pib > carta2.pib ? carta1.estado : carta2.estado);
    printf("Pontos Turísticos: %s (%s)\n", carta1.pontosTuristicos > carta2.pontosTuristicos ? carta1.nome : carta2.nome,
                                           carta1.pontosTuristicos > carta2.pontosTuristicos ? carta1.estado : carta2.estado);
    printf("Densidade (menor vence): %s (%s)\n", carta1.densidade < carta2.densidade ? carta1.nome : carta2.nome,
                                                 carta1.densidade < carta2.densidade ? carta1.estado : carta2.estado);
    printf("PIB per Capita: %s (%s)\n", carta1.pibPerCapita > carta2.pibPerCapita ? carta1.nome : carta2.nome,
                                        carta1.pibPerCapita > carta2.pibPerCapita ? carta1.estado : carta2.estado);
    printf("Super Poder: %s (%s)\n", carta1.superPoder > carta2.superPoder ? carta1.nome : carta2.nome,
                                     carta1.superPoder > carta2.superPoder ? carta1.estado : carta2.estado);

    return 0;
}