#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar as notas
    float nota1, nota2, nota3, media;

    printf("Vamos descobrir sua média!\n");
    
    // Entrada de dados pelo usuário
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("~~~~~~~~~~~~~~~~~~~~~~\n");

    // Cálculo da média
    media = (nota1 + nota2 + nota3) / 3;

    // Saída do resultado
    printf("A sua Média é: %.2f\n", media);
    printf("~~~~~~~~~~~~~~~~~~~~~~\n");

    return 0;
}
