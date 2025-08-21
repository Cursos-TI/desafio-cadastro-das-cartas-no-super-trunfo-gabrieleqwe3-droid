#include <stdio.h>

int main() {
    // Carta 1
    char estado1[100] = "M";
    char codigo1[50] = "M03";
    char nome1[100] = "São Sebastião do Paraiso";
    int populacao1 = 72000;
    float area1 = 814.925;
    float pib1 = 2200000000.0;
    int pontos_turisticos1 = 12;

    // Carta 2
    char estado2[100] = "S";
    char codigo2[30] = "S02";
    char nome2[100] = "São Simão";
    int populacao2 = 13442;
    float area2 = 618.000;
    float pib2 = 501300000.0;
    int pontos_turisticos2 = 5;

    // Exibindo carta 1
    printf("===== CARTA 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibindo carta 2
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}