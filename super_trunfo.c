#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1 = 'A'; // Minas Gerais
    char codigo1[5] = "A251"; // Código da carta
    char nomeCidade1[100] = "Itajubá"; // Nome da cidade
    int populacao1 = 120000; // População em habitantes
    float area1 = 1200.0; // Área em km²
    float pib1 = 150.0; // PIB em bilhões de reais
    int pontosTuristicos1 = 36; // Número de pontos turísticos

    // Declaração das variáveis para a segunda carta
    char estado2 = 'B'; // Exemplo de outro estado
    char codigo2[5] = "B123"; // Código da carta
    char nomeCidade2[100] = "Belo Horizonte"; // Nome da cidade
    int populacao2 = 2500000; // População em habitantes
    float area2 = 331.0; // Área em km²
    float pib2 = 100.0; // PIB em bilhões de reais
    int pontosTuristicos2 = 50; // Número de pontos turísticos

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}