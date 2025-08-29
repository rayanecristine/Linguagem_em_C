#include <stdio.h>

int main(void) {

    //Carta 1
    //Declaração das variáveis 1
    char estado1;
    char codigo1[4];     
    char cidade1[100];   
    int  populacao1;
    float area1;
    float pib1;
    int  pontos1;

    //Leitura dos dados 1
    printf("=== Cadastro da carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);                 

    printf("codigo (ex: A01): ");
    scanf(" %3s", codigo1);                 

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", cidade1);            

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area (km2): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhoes de R$): ");
    scanf(" %f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf(" %d", &pontos1);

    //Carta 2
    //Declaração das variáveis 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int  populacao2;
    float area2;
    float pib2;
    int  pontos2;
    
    //Leitura dos dados 2
    printf("\n=== Cadastro da carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);                 

    printf("Codigo (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", cidade2);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area (km2): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhoes de R$): ");
    scanf(" %f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf(" %d", &pontos2);

    //Impressão dos dados
    printf("\n---Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos turisticos: %d\n", pontos1);

    printf("\n---Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos turisticos: %d\n", pontos2);

    return 0;
}