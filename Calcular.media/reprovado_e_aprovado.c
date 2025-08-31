#include <stdio.h>

int main() {
    // Declaração das variáveis
    float nota1, nota2, nota3, media;

    printf("Vamos descobrir sua média!\n");
    // Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("~~~~~~~~~~~~~~~~~~~~~~\n");

    // Cálculo da média
    media = (nota1 + nota2 + nota3) / 3;

    // Exibição da média
    printf("\nA media das tres notas eh: %.2f\n", media);

    // Estrutura condicional para aprovação ou reprovação
    if (media >= 7.0) {
        printf("Situacao: APROVADO! Parabens!\n");
    } else {
        printf("Situacao: REPROVADO. Continue estudando!\n");
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~\n");

    return 0;
}