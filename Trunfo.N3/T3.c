#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    // Duas cartas simples
    char nome1[] = "SS do Paraiso";
    int populacao1 = 72000;
    float area1 = 814.9;
    float pib1 = 2.2;
    int pontos1 = 12;

    char nome2[] = "Sao Paulo";
    int populacao2 = 12300000;
    float area2 = 1521.1;
    float pib2 = 699.0;
    int pontos2 = 80;

    int escolhaCarta, atributo1, atributo2;
    int cartaComputador;

    // Jogador escolhe carta
    printf("=== SUPER TRUNFO ===\n");
    printf("Escolha sua carta:\n");
    printf("1 - %s\n", nome1);
    printf("2 - %s\n", nome2);
    scanf("%d", &escolhaCarta);

    if (escolhaCarta == 1) {
        printf("Voce escolheu a carta: %s\n", nome1);
    } else if (escolhaCarta == 2) {
        printf("Voce escolheu a carta: %s\n", nome2);
    } else {
        printf("Carta invalida!\n");
        return 0;
    }

    // Computador escolhe carta aleatória
    cartaComputador = (rand() % 2) + 1;
    while (cartaComputador == escolhaCarta) {
        cartaComputador = (rand() % 2) + 1;
    }

    if (cartaComputador == 1) {
        printf("O computador ficou com a carta: %s\n", nome1);
    } else {
        printf("O computador ficou com a carta: %s\n", nome2);
    }

    // Primeiro menu de atributos
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    scanf("%d", &atributo1);

    // Segundo menu de atributos (dinâmico com switch)
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    switch (atributo1) {
        case 1:
            printf("2 - Area\n3 - PIB\n4 - Pontos Turisticos\n");
            break;
        case 2:
            printf("1 - Populacao\n3 - PIB\n4 - Pontos Turisticos\n");
            break;
        case 3:
            printf("1 - Populacao\n2 - Area\n4 - Pontos Turisticos\n");
            break;
        case 4:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n");
            break;
        default:
            printf("Atributo invalido!\n");
            return 0;
    }
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Os atributos devem ser diferentes!\n");
        return 0;
    }

    // Pega os valores da carta do jogador e do computador
    float valor1Jog = 0, valor2Jog = 0, valor1Comp = 0, valor2Comp = 0;

    // Atributo 1
    if (atributo1 == 1) {
        if (escolhaCarta == 1) valor1Jog = populacao1; else valor1Jog = populacao2;
        if (cartaComputador == 1) valor1Comp = populacao1; else valor1Comp = populacao2;
        printf("Comparando Populacao...\n");
    } else if (atributo1 == 2) {
        if (escolhaCarta == 1) valor1Jog = area1; else valor1Jog = area2;
        if (cartaComputador == 1) valor1Comp = area1; else valor1Comp = area2;
        printf("Comparando Area...\n");
    } else if (atributo1 == 3) {
        if (escolhaCarta == 1) valor1Jog = pib1; else valor1Jog = pib2;
        if (cartaComputador == 1) valor1Comp = pib1; else valor1Comp = pib2;
        printf("Comparando PIB...\n");
    } else if (atributo1 == 4) {
        if (escolhaCarta == 1) valor1Jog = pontos1; else valor1Jog = pontos2;
        if (cartaComputador == 1) valor1Comp = pontos1; else valor1Comp = pontos2;
        printf("Comparando Pontos Turisticos...\n");
    }

    // Atributo 2
    if (atributo2 == 1) {
        if (escolhaCarta == 1) valor2Jog = populacao1; else valor2Jog = populacao2;
        if (cartaComputador == 1) valor2Comp = populacao1; else valor2Comp = populacao2;
        printf("Comparando Populacao...\n");
    } else if (atributo2 == 2) {
        if (escolhaCarta == 1) valor2Jog = area1; else valor2Jog = area2;
        if (cartaComputador == 1) valor2Comp = area1; else valor2Comp = area2;
        printf("Comparando Area...\n");
    } else if (atributo2 == 3) {
        if (escolhaCarta == 1) valor2Jog = pib1; else valor2Jog = pib2;
        if (cartaComputador == 1) valor2Comp = pib1; else valor2Comp = pib2;
        printf("Comparando PIB...\n");
    } else if (atributo2 == 4) {
        if (escolhaCarta == 1) valor2Jog = pontos1; else valor2Jog = pontos2;
        if (cartaComputador == 1) valor2Comp = pontos1; else valor2Comp = pontos2;
        printf("Comparando Pontos Turisticos...\n");
    }

    // Soma final
    float somaJog = valor1Jog + valor2Jog;
    float somaComp = valor1Comp + valor2Comp;

    printf("\nSoma dos atributos do Jogador: %.2f\n", somaJog);
    printf("Soma dos atributos do Computador: %.2f\n", somaComp);

    if (somaJog > somaComp) {
        printf("Voce venceu!\n");
    } else if (somaComp > somaJog) {
        printf("O computador venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}