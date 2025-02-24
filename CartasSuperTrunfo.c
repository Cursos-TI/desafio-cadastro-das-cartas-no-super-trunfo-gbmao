#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigodacidade, populacao, pt, pib, area;
    char nome[100];
    
    printf("Digite o nome da cidade:");
    scanf("%c", &nome );

    printf("Digite o código da cidade\n");
    scanf("%d", &codigodacidade);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    
    printf("Digite o PIB da cidade:\n");
    scanf("%d", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pt);

    printf("Digite a área da cidade em km²:");
    scanf("%d", &area);
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Cidade: %s\n", nome);
    printf("Código: %d\n", codigodacidade);
    printf("População: %d\n", populacao);
    printf("Pib: %d\n", pib);
    printf("Possui %d pontos turisticos\n", pt);
    printf("Área: %d km²\n", area);

    return 0;
}
