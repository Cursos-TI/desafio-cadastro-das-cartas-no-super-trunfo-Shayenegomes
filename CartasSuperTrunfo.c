#include <stdio.h>
int main() {
    // Dados da Carta 1: Sorocaba, SP
    char estado1 = 'A';
    char codigo1[] = "A01";char cidade1[] = "Sorocaba";
    int populacao1 = 723574; // População estimada em 2022
    float area1 = 450.38; // Área em km²
    float pib1 = 32.0; // PIB em bilhões de reais (valor aproximado)
    int pontos1 = 15; // Número estimado de pontos turísticos

    // Dados da Carta 2: Cabo Frio, RJ
    char estado2 = 'B';
    char codigo2[] = "B02";
    char cidade2[] = "Cabo Frio";
    int populacao2 = 221897; // População estimada em 2022
    float area2 = 410.42; // Área em km²
    float pib2 = 8.44; // PIB em bilhões de reais (valor aproximado)
    int pontos2 = 10; // Número estimado de pontos turísticos

    // Exibição das cartas cadastradas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
